import matplotlib.pyplot as plt

# Data
x = [1, 2, 3, 4]
y1 = [10, 20, 25, 30]
y2 = [1, 4, 9, 16]

# Figure 1: Line Chart
plt.subplot(1, 2, 1) # 1 row, 2 columns, 1st graph
plt.plot(x, y1, color='red')
plt.title("Line Plot")

# Figure 2: Bar Chart
plt.subplot(1, 2, 2) # 1 row, 2 columns, 2nd graph
plt.bar(x, y2, color='green')
plt.title("Bar Chart")

plt.show()
