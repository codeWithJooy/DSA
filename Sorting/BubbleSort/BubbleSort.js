function BubbleSort(arr,size){
    for(let i=0;i<size-1;i++){
        for(let j=0;j<size-1;j++){
            if(arr[j]> arr[j+1]){
                let temp=arr[j]
                arr[j]=arr[j+1]
                arr[j+1]=temp
            }
        }
    }
}

function printArray(arr,size){
  for(let i=0;i<size;i++){
      console.log(arr[i])
  }
}

let arr=[5,4,3,2,1]
let size=arr.length
BubbleSort(arr,size)
printArray(arr,size)

