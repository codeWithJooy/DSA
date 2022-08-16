#include<iostream>
using namespace std;

void BubbleSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
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
  BubbleSort(arr,size);
  printArray(arr,size);
  
  return 0;
}