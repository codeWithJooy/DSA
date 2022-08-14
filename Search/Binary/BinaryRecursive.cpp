#include<iostream>
using namespace std;

void BinaryRecursive(int arr[],int num,int low,int high){
    if(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==num){
            cout<<"Number found at place "<<mid+1;
            return;
        }
        else if(num > arr[mid]){
            BinaryRecursive(arr,num,mid+1,high);
            return;
        }
        else if(num < arr[mid]){
            BinaryRecursive(arr,num,low,mid-1);
            return;
        }
    }
    cout<<"Number Not Found"<<"\n";
}

int main(){
    int arr[]={1,2,3,4,5,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int low=0;
    int high=size-1;
    int num=11;
    BinaryRecursive(arr,num,low,high);
    return 0;
}