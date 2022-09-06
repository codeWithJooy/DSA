function insertInArray(arr,n,capacity,key){
    if(n>=capacity){
        console.log("Array Full")
        return
    }

    arr.push(key)
}

function maxElement(arr){
    let max=Number.NEGATIVE_INFINITY
    for(let i=0;i<arr.length;i++){
       if(arr[i] > max){
           max=arr[i]
       }
    }
    return max
}

function minElement(arr){
    let min=Number.POSITIVE_INFINITY
    for(let i=0;i<arr.length;i++){
       if(arr[i] < min){
           min=arr[i]
       }
    }
    return min
}

const reverseArray=(arr)=>{
    let n=arr.length
    for(let i=0;i<arr.length/2;i++){
        let temp=arr[n-1-i];
        arr[n-1-i]=arr[i]
        arr[i]=temp
    }
}

let arr=[2,4,1,5,10,15,12]

let n =arr.length
let capacity=20
let key=45
console.log("Array Before Insertiion")
for(let i=0;i<arr.length;i++){
    console.log(arr[i])
}

insertInArray(arr,n,capacity,key)

console.log("Array After Insertiion")
for(let i=0;i<arr.length;i++){
    console.log(arr[i])
}

console.log(`Max Value of Array is ${maxElement(arr)}`)

console.log(`Min Value of Array is ${minElement(arr)}`)

reverseArray(arr)
console.log("Array After Reversal")
for(let i=0;i<arr.length;i++){
    console.log(arr[i])
}