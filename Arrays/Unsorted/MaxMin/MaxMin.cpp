#include<iostream>
#include<climits>
using namespace std;

void MaxMin(int arr[],int size){
    int max=INT_MIN;
    int min=INT_MAX;

    for(int i=0;i<size;i++){
        if(arr[i] > max){
            max=arr[i];
        }
        if(arr[i] < min){
            min=arr[i];
        }
    }

    cout<<"Maximum Value in Array is "<<max<<"\n";
    cout<<"Minimum Value in Array is "<<min<<"\n";

}

int main(){
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);

    MaxMin(arr,size);

    return 0;
}