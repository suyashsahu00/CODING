import pandas as pd

# Load your data (assuming it's in a CSV file)
df = pd.read_csv('Vocational Training/IIIT Naya Raipur/Python/03-07-25/NCTT - Sheet1.csv')

# Display missing values in each column
print("Missing values in each column:")
print(df.isnull().sum())

# Mean
mean_meal_cal = df['meal. Cal'].mean()

# Median
median_meal_cal = df['meal. Cal'].median()

# Mode
mode_meal_cal = df['meal. Cal'].mode()

print("Mean:", mean_meal_cal)
print("Median:", median_meal_cal)
print("Mode:", mode_meal_cal.values)

# Calculate and print the mean value of the 'meal. Cal' column
mean_value = df['meal. Cal'].mean()
print("Mean value of 'meal. Cal' column:", mean_value)
# If you want to fill missing values in 'meal. Cal' column with its mean:
df['meal. Cal'].fillna(mean_value, inplace=True)

# Display the updated DataFrame (optional)
print(df.head())
    