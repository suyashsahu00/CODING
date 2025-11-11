from functools import reduce

data = [10, 20, 30, 40, 50]

mean = (lambda lst: reduce(lambda x, y: x + y, lst) / len(lst))(data)

print("Mean value:", mean)
