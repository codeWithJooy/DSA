const sortCheck=(arr)=>{
    for(let i=1;i<arr.length;i++){
        if(arr[i] < arr[i-1]){
            console.log("Array Is Not Sorted");
            return
        }
    }

    console.log("Array Is Sorted")
}

let arr=[1,2,3,4,5]
let arr2=[1,2,5,3,6]

console.log("About Array 1")
sortCheck(arr)

console.log("About Array 2")
sortCheck(arr2)