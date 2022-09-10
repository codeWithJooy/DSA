#include<iostream>
using namespace std;

void reverse(int arr[],int size){
    for(int i=0;i<size/2;i++){
        int temp=arr[i];
        arr[i]=arr[size-1-i];
        arr[size-1-i]=temp;
    }
}

void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
    int arr[]={5,4,3,2,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"Array Before Reversal\n";
    printArray(arr,size);

    reverse(arr,size);

    cout<<"Array After Reversal\n";
    printArray(arr,size);
}