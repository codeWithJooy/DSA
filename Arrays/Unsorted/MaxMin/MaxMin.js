const MaxMin=(arr)=>{
    let max=Number.NEGATIVE_INFINITY
    let min=Number.POSITIVE_INFINITY

    for(let i=0;i<arr.length;i++){
        if(arr[i] > max)
           max=arr[i]
        if(arr[i] < min)
           min=arr[i]   
    }

    console.log(`Maximum of array is ${max}`)
    console.log(`Minimum of array is ${min}`)
}

let arr=[1,2,3,4,5]
MaxMin(arr)