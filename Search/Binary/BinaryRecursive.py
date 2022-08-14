def BinaryRecursive(arr,num,low,high):
    if(low <= high):
        mid=(low+high)//2
        if(num == arr[mid]):
            print("Number Found at ",mid+1)
            return
        elif(num > arr[mid]):
            BinaryRecursive(arr,num,mid+1,high)
            return
        elif(num < arr[mid]):
            BinaryRecursive(arr,num,low,mid-1)
            return
    print("Number Not Found")

arr=[1,2,3,4,5,10]
high=len(arr)-1
low=0
num=10
BinaryRecursive(arr,num,low,high)                
