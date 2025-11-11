import pandas as pd
s = ["jyoti", "Shivanshu", "raj"]
s = list(map(str.upper, s))

number = 3.3737
i = round(number,2) 

print(s)
print(i)

# Rounding to 2 decimal places
print(round(3.1432, 2))  # Output: 3.14

digits = [0, 1, 2, 3]

even = list(filter(lambda x: x % 2 == 0, digits))
odd = list(filter(lambda x: x % 2 != 0, digits))

print("Even digits:", even)
print("Odd digits:", odd)

print((lambda x: "even" if x % 2 == 0 else "odd")(4))


s = pd.Series([0, 1, 2, 3])
result = s.map(lambda x: "Even" if x % 2 == 0 else "Odd")

print(result)