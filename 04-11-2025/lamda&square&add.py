import pandas as pd

s = pd.Series([0, 1, 2, 3])
result = s.map(lambda x: "Even" if x % 2 == 0 else "Odd")
print(result)
squared = s.map(lambda x: x**2)
print(squared)
added = s.map(lambda x: x + 10)
print(added)

