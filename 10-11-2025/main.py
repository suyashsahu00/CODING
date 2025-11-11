import pandas as pd

# By default, Series is column-wise
S = pd.Series([70, 60, 75, 90, 95, 99])

print("Sum: ", S.sum())
print("Mean: ", S.mean())
print("Max: ", S.max())
print("Min: ", S.min())
print("Median: ", S.median())
print("Standard Deviation: ", S.std())
print("Variance: ", S.var())