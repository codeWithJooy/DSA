#include<iostream>
using namespace std;

int insertAtEnd(int arr[],int size,int capacity,int data){
   if(size >= capacity){
       cout<<"Array Is Full";
       return size;
   }
   arr[size]=data;
   return size+1;
}

int main(){
    int arr[20]={10,4,12,23,2,3,4};
    int capacity=sizeof(arr)/sizeof(arr[0]);

    int n=7;
    int key=35;

    cout<<"\nBefore Insertion\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    n=insertAtEnd(arr,n,capacity,key);

    cout<<"\nAfter Insertion\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;
}