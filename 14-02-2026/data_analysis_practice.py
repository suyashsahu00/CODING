import pandas as pd
import matplotlib.pyplot as plt

# Load the dataset
file_path = 'sales_data.csv'

try:
    df = pd.read_csv(file_path)
    print("Dataset loaded successfully!")
except FileNotFoundError:
    print(f"Error: The file '{file_path}' was not found. Make sure it is in the same folder.")
    exit()
except ImportError:
    print("Error: Pandas is not installed. Run 'pip install pandas' in your terminal.")
    exit()

# --- PRACTICE SECTION 1: INSPECT DATA ---
print("\n--- First 5 rows ---")
print(df.head())

print("\n--- Data Info (Types & Nulls) ---")
df.info()

print("\n--- Statistics Summary ---")
print(df.describe())

# --- PRACTICE SECTION 2: BASIC ANALYSIS EXAMPLES ---

# 1. Total Sales Calculation
total_sales = df['TotalRevenue'].sum()
print(f"\nTotal Revenue: ${total_sales:,.2f}")

# 2. Sales by Region
print("\n--- Total Revenue by Region ---")
region_sales = df.groupby('Region')['TotalRevenue'].sum().sort_values(ascending=False)
print(region_sales)

# --- YOUR TURN: TRY THESE EXERCISES ---
# Write your code below to solve these:

# 3. Find the best-selling Product Category (Electronics vs Accessories) based on 'UnitsSold'
# Hint: specific_group = df.groupby('Category')['UnitsSold'].sum()

# 4. Filter for 'Credit Card' transactions only and show the first 5 rows
# Hint: cc_sales = df[df['PaymentMethod'] == 'Credit Card']

# 5. (Advanced) Convert 'Date' to datetime and plot daily sales
# df['Date'] = pd.to_datetime(df['Date'])
# daily_sales = df.groupby('Date')['TotalRevenue'].sum()
# daily_sales.plot(kind='line', title='Daily Sales Trend')
# plt.show()
