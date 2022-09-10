const reverse=(arr)=>{
    let arr_size=arr.length
    for(let i=0;i<(arr_size)/2;i++){
        let temp=arr[i];
        arr[i]=arr[arr_size-1-i];
        arr[arr_size-1-i]=temp
    }
}

let arr=[5,4,3,2,1]
console.log("Array Before Reversal")
for(let i=0;i<arr.length;i++){
    console.log(arr[i])
}

reverse(arr)

console.log("Array After Reversal")
for(let i=0;i<arr.length;i++){
    console.log(arr[i])
}