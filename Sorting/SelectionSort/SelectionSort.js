function selectionSort(arr,size){
    let min_inx=0
    for( let i=0;i<size-1;i++){
        min_idx=i
        for(let j=i+1;j<size;j++){
            if(arr[j] < arr[min_idx]){
                min_idx=j
            }
        }
        if(min_idx!=i){
            let temp=arr[min_idx]
            arr[min_idx]=arr[i]
            arr[i]=temp
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
  selectionSort(arr,size)
  printArray(arr,size)