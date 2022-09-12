const deleteFromEnd=(arr)=>{
    arr.pop()
}

let arr=[5,4,3,2,1]
console.log("Array Before Deletion")
for(let i=0;i<arr.length;i++){
    console.log(arr[i])
}
deleteFromEnd(arr)

console.log("Array After Deletion")
for(let i=0;i<arr.length;i++){
    console.log(arr[i])
}