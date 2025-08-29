import pandas as pd
import numpy as np

# Create a sample dataframe
data = {
    'X': [2, 3, 4 ],
    'Y': [5, 8, 10],
    
} 

df = pd.DataFrame(data)

print("DataFrame:")
print(df)

# Covariance matrix
print("\nCovariance Matrix:")
print(df.cov())

# Correlation matrix
print("\nCorrelation Matrix:")
print(df.corr())