import matplotlib.pyplot as plt

#Data

fruits =['Apple','Banana','Mango']
sales =[50,80,65]

#plotting

plt.bar(fruits, sales,color='skyblue')

#decorative

plt.xlabel ("Fruit Name")
plt.ylabel("Sales (kg)")
plt.title("fruit Sales Report")

#show
plt.show()