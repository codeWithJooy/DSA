def TwoPointers(arr,num,size):
    low=0
    high=size-1
    while(low < high):
        sum=arr[low]+arr[high]
        if( sum == num):
            print("Pair Present")
            return
        elif(sum > num):
            high=high-1
        else:
            low=low+1

arr=[2, 3, 5, 8, 9, 10, 11]
num=17
size=len(arr)
TwoPointers(arr,num,size)            
            