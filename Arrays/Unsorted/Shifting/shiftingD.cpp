#include<iostream>
using namespace std;

void shiftDLeft(int arr[],int size,int d){
    int temp[d];

    //Placing first d elements to temp array
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    //Shift the Remaining Elements to left
    for(int i=d;i<size;i++){
        arr[i-d]=arr[i];
    }

    //Place the elements of temp array to original array
    for(int i=0;i<d;i++){
        arr[size-d+i]=temp[i];
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
    cout<<"Array Before Shifting\n";
    printArray(arr,size);

    shiftDLeft(arr,size,2);

    cout<<"Array After Shifting\n";
    printArray(arr,size);
}