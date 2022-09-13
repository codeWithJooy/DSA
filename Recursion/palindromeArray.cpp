#include<iostream>
using namespace std;

int palindromeCheckArray(int arr[],int start,int end){
    if(start > end){
        return 0;
    }
    if(arr[start]==arr[end]){
        if(start+1 <= end-1){
            return (1 && palindromeCheckArray(arr,start+1,end-1));
        }
        return 1;
    }

    return 0;
}

int main(){
    int arr[]={1,2,3,3,2,1};
    int start=0;
    int end=sizeof(arr)/sizeof(arr[0]) - 1;
    int check=palindromeCheckArray(arr,start,end);
    if(check){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not";
    }
    return 0;
}