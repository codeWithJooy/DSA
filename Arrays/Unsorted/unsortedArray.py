def insertToArray(arr,n,capacity,key):
    if n>= capacity:
        print("Array is Full\n")
        return
    arr.append(key)    

arr=[2,3,4,15,12,11]
n=len(arr)
capacity=20
key=45

print("Before Insertion")
for i in range(len(arr)):
    print(arr[i])
    
insertToArray(arr,n,capacity,key)

print("After Insertion")
for i in range(len(arr)):
    print(arr[i])

