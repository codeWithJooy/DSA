#include<iostream>
using namespace std;

void Binaryterative(int arr[],int num,int low,int high){
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==num){
            cout<<"Number found at place "<<mid+1;
            return;
        }
        else if(num > arr[mid]){
            low=mid+1;
        }
        else if(num < arr[mid]){
            high=mid-1;
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
    Binaryterative(arr,num,low,high);
    return 0;
}