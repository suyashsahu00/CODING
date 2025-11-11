import pandas as pd

def init(x):
    return x*2

s_n = pd.Series([1, 2, 3, 4, 5])
r =s_n.map(init)
print(r)