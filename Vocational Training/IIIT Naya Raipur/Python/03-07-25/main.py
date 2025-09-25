import pandas as pd 

df = pd.read_csv('Vocational Training/IIIT Naya Raipur/Python/03-07-25/data.csv')

# Fill missing numeric values in 'Price' and 'Stock' columns with 130
df['Price'] = df['Price'].fillna(130)
df['Stock'] = df['Stock'].fillna(130)

print(df.to_string())

# Display the number of missing values in each column
print("\nMissing values in each column:")
print(df.isnull().sum())


 