#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void SelectionSort(int arr[],int size){
   
   int min_idx=0;
   for(int i=0;i<size-1;i++){
      min_idx=i;
      for(int j=i+1;j<size;j++){
          if(arr[j]<arr[min_idx])
             min_idx=j;
      }
      if(min_idx!=i){
          swap(&arr[min_idx],&arr[i]);
      }
   }
}

void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
  int arr[]={5,4,3,2,1};
  int size=sizeof(arr)/sizeof(arr[0]);

  printArray(arr,size);
  SelectionSort(arr,size);
  printArray(arr,size);
  
  return 0;
}