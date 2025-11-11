import pandas as pd

df = pd.DataFrame({
    'Math': [80, 90, 75, 85],
    'Science': [70, 85, 90, 78],
    'English': [92, 88, 70, 95]
})

col_max = df[['Math', 'Science', 'English']].apply(max, axis=0)
print(col_max)