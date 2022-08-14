function TwoPointers(arr,num,size){

    let low=0
    let high=size-1

    while(low < high){
        sum = arr[low]+arr[high]
        if( sum == num){
            console.log("Pair Present")
            return
        }
        else if (sum > num){
            high=high-1
        }
        else if(sum < num){
            low=low+1
        }
    }
    console.log(`No pair Present with sum equals to ${num}`)

}

let arr=[2, 3, 5, 8, 9, 10, 11]
let num=17
let size=arr.length
TwoPointers(arr,num,size)

