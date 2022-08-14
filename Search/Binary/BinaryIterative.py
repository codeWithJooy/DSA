def BinaryIterative(arr,num,low,high):
    while(low <= high):
        mid=(low+high)//2
        if(num == arr[mid]):
            print("Number Found at ",mid+1)
            return
        elif(num > arr[mid]):
            low=mid+1
        elif(num < arr[mid]):
            high=mid-1
    print("Number Not Found")

arr=[1,2,3,4,5,10]
high=len(arr)-1
low=0
num=11
BinaryIterative(arr,num,low,high)                
