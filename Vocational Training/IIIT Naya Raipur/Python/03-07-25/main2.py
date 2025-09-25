import pandas as pd

# Load your data (assuming it's in a CSV file)
df = pd.read_csv(r'Vocational Training/IIIT Naya Raipur/Python/03-07-25/titanic - titanic.csv')

# Select specific columns
td2 = df[["Embarked", "Age", "Fare"]]

# Show the proportion of missing values in each column
print(td2.isnull().mean())

# Display the selected data
print(td2.head())


print(td2.Embarked.mode())

print(td2.Embarked.fillna('S'))

import matplotlib.pyplot as plt

# Display histogram of "Duration" column
plt.hist(df["Age"].dropna(), bins=20, edgecolor='black')
plt.xlabel("Age")
plt.ylabel("Frequency")
plt.title("Histogram of Age")
plt.show()

# Replace missing values in "Age" with mean
td2["Age"].fillna(td2["Age"].mean(), inplace=True)

# Replace missing values in "Embarked" with mode
td2["Embarked"].fillna(td2["Embarked"].mode()[0], inplace=True)

# Replace missing values in "Fare" with mean
td2["Fare"].fillna(td2["Fare"].mean(), inplace=True)

# Display the updated data
print(td2.head())

# Separate numerical data
numerical_data = td2.select_dtypes(include=['number'])
print("Numerical Data:")
print(numerical_data.head())


# Separate categorical data
categorical_data = td2.select_dtypes(include=['object'])
print("Categorical Data:")
print(categorical_data.head())

# Find unique values in each categorical column
for col in categorical_data.columns:
    print(f"Unique values in '{col}': {categorical_data[col].unique()}")


    # Print actual values of 'Sex' column
    print("Actual values in 'Sex' column:")
    print(df['Sex'].head())

    # Encode 'Sex' column (e.g., male: 0, female: 1)
    sex_encoded = df['Sex'].map({'male': 0, 'female': 1})

    print("Encoded values of 'Sex' column:")
    print(sex_encoded.head())