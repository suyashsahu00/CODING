import pandas as pd
from sklearn.model_selection import train_test_split
from sklearn.linear_model import LinearRegression
from sklearn.metrics import r2_score, mean_squared_error, mean_absolute_error

data = pd.read_csv("D:\C++ cource\python\synthetic_employee_data.csv")


X = data[['Age', 'Years_at_Company', 'Job_Satisfaction', 'Work_Life_Balance', 'Num_Trainings']]
y = data['Performance_Rating']


X_train, X_test, y_train, y_test = train_test_split(X, y, test_size=0.2, random_state=42)


model = LinearRegression()
model.fit(X_train, y_train)

y_pred = model.predict(X_test)

r2 = r2_score(y_test, y_pred)
mse = mean_squared_error(y_test, y_pred)
mae = mean_absolute_error(y_test, y_pred)

print(f"R2 Score: {r2:.3f}")
print(f"MSE: {mse:.3f}")
print(f"MAE: {mae:.3f}")


from sklearn.linear_model import Ridge, Lasso
from sklearn.model_selection import cross_val_score
from sklearn.preprocessing import StandardScaler
import numpy as np


scaler = StandardScaler()
X_scaled = scaler.fit_transform(X)


models = {
    'Linear': LinearRegression(),
    'Ridge': Ridge(alpha=1.0),
    'Lasso': Lasso(alpha=0.1)
}

for name, model in models.items():
    r2_scores = cross_val_score(model, X_scaled, y, cv=5, scoring='r2')
    rmse_scores = np.sqrt(-cross_val_score(model, X_scaled, y, cv=5, scoring='neg_mean_squared_error'))
    
    print(f"{name} Regression:")
    print(f"  Average R2: {np.mean(r2_scores):.3f}")
    print(f"  Average RMSE: {np.mean(rmse_scores):.3f}\n")

    
    
from sklearn.ensemble import RandomForestRegressor


rf = RandomForestRegressor(n_estimators=100, random_state=42)
rf.fit(X_train, y_train)


importances = rf.feature_importances_
features = X.columns


feature_importance = pd.DataFrame({'Feature': features, 'Importance': importances})
feature_importance = feature_importance.sort_values('Importance', ascending=False)

print("Feature Importances:")
print(feature_importance)


import matplotlib.pyplot as plt
plt.figure(figsize=(10, 6))
plt.barh(feature_importance['Feature'], feature_importance['Importance'])
plt.xlabel('Importance')
plt.title('Feature Importance for Performance Rating')
plt.gca().invert_yaxis()
plt.show()



from sklearn.preprocessing import PolynomialFeatures
from sklearn.pipeline import make_pipeline


X_poly = data[['Years_at_Company', 'Job_Satisfaction']]


X_train_poly, X_test_poly, y_train_poly, y_test_poly = train_test_split(
    X_poly, y, test_size=0.2, random_state=42)


linear = LinearRegression()
linear.fit(X_train_poly, y_train_poly)
y_pred_linear = linear.predict(X_test_poly)
r2_linear = r2_score(y_test_poly, y_pred_linear)


poly = make_pipeline(
    PolynomialFeatures(degree=2),
    LinearRegression())
poly.fit(X_train_poly, y_train_poly)
y_pred_poly = poly.predict(X_test_poly)
r2_poly = r2_score(y_test_poly, y_pred_poly)


n = X_test_poly.shape[0]
p_linear = X_train_poly.shape[1]
p_poly = X_train_poly.shape[1] * 2 + 1  

adj_r2_linear = 1 - (1 - r2_linear) * (n - 1) / (n - p_linear - 1)
adj_r2_poly = 1 - (1 - r2_poly) * (n - 1) / (n - p_poly - 1)

print(f"Linear Regression R2: {r2_linear:.3f}, Adjusted R2: {adj_r2_linear:.3f}")
print(f"Polynomial Regression R2: {r2_poly:.3f}, Adjusted R2: {adj_r2_poly:.3f}")


from sklearn.feature_selection import RFE


rfe = RFE(estimator=LinearRegression(), n_features_to_select=4)
rfe.fit(X_scaled, y)

selected_features = np.array(X.columns)[rfe.support_]
print("Selected Features:", selected_features)


X_selected = X[selected_features]
X_train_sel, X_test_sel, y_train_sel, y_test_sel = train_test_split(
    X_selected, y, test_size=0.2, random_state=42)

model_sel = LinearRegression()
model_sel.fit(X_train_sel, y_train_sel)
y_pred_sel = model_sel.predict(X_test_sel)

r2_sel = r2_score(y_test_sel, y_pred_sel)
mse_sel = mean_squared_error(y_test_sel, y_pred_sel)
mae_sel = mean_absolute_error(y_test_sel, y_pred_sel)

print("\nPerformance with Selected Features:")
print(f"R2 Score: {r2_sel:.3f}")
print(f"MSE: {mse_sel:.3f}")
print(f"MAE: {mae_sel:.3f}")


