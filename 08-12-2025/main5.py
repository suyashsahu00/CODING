import matplotlib.pyplot as plt

# Step 1: Data
height = [150, 160, 170, 180, 155]
weight = [50, 60, 70, 80, 52]

# Step 2: Create Scatter Plot
plt.scatter(height, weight, color='purple', marker='*')

# Step 3: Add Labels
plt.title("Height vs Weight Correlation")
plt.xlabel("Height (cm)")
plt.ylabel("Weight (kg)")

# Step 4: Display
plt.show()
