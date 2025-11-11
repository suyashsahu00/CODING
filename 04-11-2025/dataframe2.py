import pandas as pd

df = pd.DataFrame({
    'List1': ["aa", "bb", "cc"],
    'List2': ["cc", "dd", "ee"]
})

df = df.applymap(lambda x: x.upper()) 

print(df)