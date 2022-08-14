#include<iostream>
using namespace std;

void LinearSearch(int arr[],int size,int num){
    for(int i=0;i<size;i++){
        if(arr[i]==num){
            cout<<"Element Found at place "<<i+1;
            return;
        }
    }
    cout<<"Element Not Found";
    return;
}

int main(){
    int arr[]={1,2,3,4,5,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int num=10;
    LinearSearch(arr,size,num);
    return 0;

}