import pandas as pd

# Series
s = pd.Series([10, 20, 30], name='Numbers')
print("Series:\n", s)

# DataFrame
data = {'Name': ['Ram', 'Shyam'], 'Age': [20, 22]}
df = pd.DataFrame(data)
print("\nDataFrame:\n", df)
