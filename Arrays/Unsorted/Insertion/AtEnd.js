function insertAtEnd(arr,val){
    arr.push(val)
}

let arr=[5,4,3,2,1]
console.log("Array Before Insertion")
for(let i=0;i<arr.length;i++){
    console.log(arr[i])
}
insertAtEnd(arr,10)

console.log("Array After Insertion")
for(let i=0;i<arr.length;i++){
    console.log(arr[i])
}