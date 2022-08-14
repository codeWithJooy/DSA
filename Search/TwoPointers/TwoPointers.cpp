#include<iostream>
using namespace std;

/*
Given a sorted array A (sorted in ascending order), having N integers, find if there exists
any pair of elements (A[i], A[j]) such that their sum is equal to X.
*/

void TwoPointers(int arr[],int num,int size){

    int low=0;
    int high=size-1;

    while(low < high){
        int sum = arr[low]+arr[high];
        if( sum == num){
            cout<<"Pair Present";
            return;
        }
        else if (sum > num){
            high=high-1;
        }
        else if(sum < num){
            low=low+1;
        }
    }
    cout<<"No Pair having Sum equal to Number "<< num;
}

int main(){
    int arr[]={2, 3, 5, 8, 9, 10, 11};
    int num=17;
    int size=sizeof(arr)/sizeof(arr[0]);
    TwoPointers(arr,num,size);
    return 0;
}