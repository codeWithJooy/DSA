#include<iostream>
using namespace std;

void sortCheck(int arr[],int size){
    for(int i=1;i<size;i++){
        if(arr[i] < arr[i-1]){
            cout<<"Array is Not Sorted in Ascending Order\n";
            return;
        }
    }
    cout<<"Array is Sorted in Ascending order\n";
}
int main(){
  int arr1[]={1,2,3,4,5};
  int arr2[]={1,2,5,3,6};

  cout<<"About Array 1\n";
  sortCheck(arr1,sizeof(arr1)/sizeof(arr1[0]));


  cout<<"About Array 2\n";
  sortCheck(arr2,sizeof(arr2)/sizeof(arr2[0]));
}