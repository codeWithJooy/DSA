def LinearSearch(arr,n,num):
    for i in range(0,n):
        if(arr[i]==num):
            print("Element Present at place ",i+1)
            return
    print("Element Not Found")
    return         

arr=[1,2,3,4,5,10]
num=10
size=len(arr)
LinearSearch(arr,size,num)
