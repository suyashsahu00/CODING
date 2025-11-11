import pandas as pd

data = [[1, 2, 3, 4, 5, 6, 7, 8, 9, 10]]
df = pd.DataFrame(data)
print(df)

x = 3.14159
rounded_x = round(x, 2)  


list1 = ["aa", "bb", "cc"]
list2 = ["cc", "dd", "ee"]


series1 = pd.Series(list1)
series2 = pd.Series(list2)


series1_upper = series1.str.upper()
series2_upper = series2.str.upper()


print(series1_upper)
print(series2_upper)