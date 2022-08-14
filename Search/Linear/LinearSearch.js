function LinearSearch(arr,n,x){
    for(let i=0;i<n;i++){
        if(arr[i]==x){
            console.log(`Element found at place ${i+1}`)
            return
        }
    }
    console.log("Element Not Found")
    return
}

let arr=[2,3,4,5,6,10]
let num=10
LinearSearch(arr,arr.length,num)

