import pandas as pd

left= pd.DataFrame({
    'id':[1,2,3,4,5],
    'Name':['Suyash','s1','s2','s3','s4'],
    'subject_id':['sub1','sub2','sub4','sub6','sub5']
})
right= pd.DataFrame({
    'id':[1,2,3,4,5],
    'Name':['Suyash','s1','s2','s3','s4'],
    'subject_id':['sub2','sub4','sub3','sub6','sub5']
})
print(left)
print(right)