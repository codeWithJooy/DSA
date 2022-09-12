#include<iostream>
using namespace std;

int deleteFromStart(int arr[],int size){
    if(size<1){
        cout<<"Array not present";
        return size;
    }

    for(int i=1;i<size;i++){
        arr[i-1]=arr[i];
    }

    return size-1;
}

int main(){
    int arr[20]={10,4,12,23,2,3,4};
    
    int n=7;

    cout<<"\nBefore Deletion\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    n=deleteFromStart(arr,n);

    cout<<"\nAfter Deletion\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   return 0;

}

