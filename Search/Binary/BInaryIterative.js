function BinaryIterative(arr,num,low,high){
    while(low <= high){
        let mid=(low+high)/2

        if(num == arr[mid]){
            console.log(`Number Found at place ${mid+1}`)
            return
        }
        else if(num > arr[mid]){
            low = mid+1
        }
        else if(num < arr[mid]){
              high=mid-1
        }
    }
    console.log("Number Not Found")
}

let arr = [1,2,3,4,5,10]
let low=0
let high=arr.length -1
let num=10
BinaryIterative(arr,num,low,high)