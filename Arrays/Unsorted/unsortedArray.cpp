#include<iostream>
using namespace std;

int insertInArray(int arr[],int n,int capacity,int key){

    if(n >= capacity){
        cout<<"\nArray is Full \n";
        return capacity;
    }
    arr[n]=key;
    return n+1;
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

    n=insertInArray(arr,n,capacity,key);

    cout<<"\nAfter Insertion\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}