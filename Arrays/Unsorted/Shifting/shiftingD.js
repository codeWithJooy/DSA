const shiftDLeft=(arr,d)=>{
    let temp=[]
    
    //place the First d elements in temporary array
    for(let i=0;i<d;i++){
        temp.push(arr[i])
    }

    //Shift the remaining elements to left
    for(let i=d;i<arr.length;i++){
       arr[i-d]=arr[i];
    }

    //Place the Initially Shifted Elements
    for(let i=0;i<d;i++){
        arr[i+arr.length-d]=temp[i];
    }
}

let arr=[1,2,3,4,5]

console.log("Before Shifting")
for(let i=0;i<arr.length;i++){
   console.log(arr[i])
}

shiftDLeft(arr,3)

console.log("After Shifting")
for(let i=0;i<arr.length;i++){
   console.log(arr[i])
}
