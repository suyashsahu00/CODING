import pandas as pd

# Read the employee.csv file and print its contents
df = pd.read_csv("employee.csv")
print(df)

# Example of a left join with another DataFrame
# Let's assume you have another CSV file called 'department.csv' with columns 'DeptID' and 'DeptName'
dept_df = pd.read_csv("")

# Suppose 'employee.csv' has a column 'DeptID' to join on
merged_df = pd.merge(df, dept_df, on='DeptID', how='left')
print(merged_df)