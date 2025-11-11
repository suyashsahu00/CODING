import pandas as pd

df = pd.DataFrame({
    'A': [1.234, 5.678, 9.101],
    'B': [2.345, 6.789, 10.111]
})

rounded_df = df.apply(lambda x: round(x, 2))
print(rounded_df)