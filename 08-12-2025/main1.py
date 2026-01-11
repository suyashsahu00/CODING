import matplotlib.pyplot as plt

#data

height =[150, 160, 170, 180, 155]
weight =[50, 60, 70, 80, 52]

#Create Scatter Plot

plt.scatter(height,weight,color="purple", marker="*")

#Add label

plt.title("Height vs Weight relation")
plt.xlabel("Height(cm)")
plt.ylabel("weight(kg)")

#show()
plt.show()