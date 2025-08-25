

import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.preprocessing import OneHotEncoder
from sklearn.metrics import accuracy_score, precision_score, recall_score, roc_auc_score, f1_score


print("Loading employee dataset...")
employee_data = pd.read_csv('synthetic_employee_data.csv')


selected_features = ['Age', 'Department', 'Job_Satisfaction', 'Work_Life_Balance', 'Years_at_Company']

print("\nPreparing data for modeling...")
employee_data['Left_Company'] = employee_data['Attrition'].apply(lambda x: 1 if x == 'Yes' else 0)

encoder = OneHotEncoder(drop='first')
dept_encoded = encoder.fit_transform(employee_data[['Department']])
dept_columns = encoder.get_feature_names_out(['Department'])


X = pd.concat([
    employee_data[['Age', 'Job_Satisfaction', 'Work_Life_Balance', 'Years_at_Company']],
    pd.DataFrame(dept_encoded.toarray(), columns=dept_columns)
], axis=1)

y = employee_data['Left_Company']

X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.3, random_state=42, stratify=y)

print(f"\nTraining set shape: {X_train.shape}")
print(f"Test set shape: {X_test.shape}")
print(f"Attrition rate in training: {y_train.mean():.2%}")
print(f"Attrition rate in test: {y_test.mean():.2%}")


from sklearn.tree import DecisionTreeClassifier

print("\nBuilding Decision Tree model...")
tree_model = DecisionTreeClassifier(max_depth=5, random_state=42)
tree_model.fit(X_train, y_train)


tree_preds = tree_model.predict(X_test)
tree_probs = tree_model.predict_proba(X_test)[:, 1]

print("\nDecision Tree Performance:")
print(f"- Accuracy: {accuracy_score(y_test, tree_preds):.2f}")
print(f"- Precision: {precision_score(y_test, tree_preds):.2f}")
print(f"- Recall: {recall_score(y_test, tree_preds):.2f}") 
print(f"- ROC-AUC: {roc_auc_score(y_test, tree_probs):.2f}")


from sklearn.linear_model import LogisticRegression
from sklearn.ensemble import RandomForestClassifier
from sklearn.model_selection import cross_val_score


models = {
    "Logistic Regression": LogisticRegression(max_iter=1000, class_weight='balanced'),
    "Random Forest": RandomForestClassifier(class_weight='balanced_subsample')
}

print("\nComparing model performance with 10-fold CV...")
for name, model in models.items():
    
    scores = cross_val_score(model, X_train, y_train, cv=10, scoring='f1', n_jobs=-1)
    print(f"{name:20} Average F1: {scores.mean():.2f} (+/- {scores.std():.2f})")


from imblearn.over_sampling import SMOTE
from imblearn.pipeline import make_pipeline

print("\nAddressing class imbalance with SMOTE...")
smote_pipeline = make_pipeline(
    SMOTE(random_state=42),
    RandomForestClassifier(random_state=42)
)

smote_pipeline.fit(X_train, y_train)
smote_preds = smote_pipeline.predict(X_test)

print("\nRandom Forest with SMOTE:")
print(f"- F1-score: {f1_score(y_test, smote_preds):.2f}")
print(f"- Recall: {recall_score(y_test, smote_preds):.2f}")


from sklearn.model_selection import GridSearchCV

print("\nTuning Random Forest hyperparameters...")
param_grid = {
    'n_estimators': [100, 200, 300],
    'max_depth': [10, 20, None],
    'min_samples_split': [2, 5, 10]
}

grid_search = GridSearchCV(
    RandomForestClassifier(class_weight='balanced_subsample', random_state=42),
    param_grid,
    cv=5,
    scoring='roc_auc',
    n_jobs=-1,
    verbose=1
)

grid_search.fit(X_train, y_train)

print("\nBest parameters found:")
for param, value in grid_search.best_params_.items():
    print(f"- {param}: {value}")
print(f"Best ROC-AUC: {grid_search.best_score_:.2f}")


from sklearn.feature_selection import SelectKBest, chi2

print("\nIdentifying most predictive features...")
selector = SelectKBest(chi2, k=5)
selector.fit(X_train, y_train)

selected_mask = selector.get_support()
selected_features = X_train.columns[selected_mask]

print("\nTop 5 most important features:")
for i, feature in enumerate(selected_features, 1):
    print(f"{i}. {feature}")

print("\nEvaluating model with selected features...")
X_train_selected = selector.transform(X_train)
X_test_selected = selector.transform(X_test)

rf_selected = RandomForestClassifier(**grid_search.best_params_, random_state=42)
rf_selected.fit(X_train_selected, y_train)

selected_preds = rf_selected.predict(X_test_selected)
selected_probs = rf_selected.predict_proba(X_test_selected)[:, 1]

print("\nPerformance with selected features:")
print(f"- Accuracy: {accuracy_score(y_test, selected_preds):.2f}")
print(f"- Precision: {precision_score(y_test, selected_preds):.2f}")
print(f"- Recall: {recall_score(y_test, selected_preds):.2f}")
print(f"- ROC-AUC: {roc_auc_score(y_test, selected_probs):.2f}")