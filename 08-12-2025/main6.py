import pandas as pd

# Data creation
data = {
    'Maths': [90, 80],
    'English': [70, 85]
}
df = pd.DataFrame(data, index=['Student A', 'Student B'])

print("Original DataFrame:\n", df)

# Column-wise Function (Total subject marks)
col_sum = df.sum(axis=0)
print("\nColumn-wise Sum (Subject Totals):\n", col_sum)

# Row-wise Function (Total student marks)
row_sum = df.sum(axis=1)
print("\nRow-wise Sum (Student Totals):\n", row_sum)

