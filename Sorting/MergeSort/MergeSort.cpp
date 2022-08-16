#include<iostream>
using namespace std;


void Merge(int arr[],int l,int mid,int r){
   
   //Get the Size
   int left=mid-l+1;
   int right=r-mid;

   //Arrays
   int M[left];
   int N[right];

   //Populate the Arrays
   for(int i=0;i<left;i++){
       M[i]=arr[l+i];
   }
   for(int j=0;j<right;j++){
       N[j]=arr[mid+1+j];
   }

   //Declare Variables
   int i=0;
   int j=0;
   int k=l;

    // Until we reach either end of either L or M, pick larger among
    // elements L and M and place them in the correct position at A[p..r]
    while(i<left && j<right){
        if(M[i] < N[i]){
            arr[k]=M[i];
            k++;
            i++;
        }
        else{
            arr[k]=N[j];
            k++;
            j++;
        }
    }

    while(i<left){
        arr[k]=M[i];
        i++;
        k++;
    }

    while(j<right){
        arr[k]=N[j];
        j++;
        k++;
    }
}

void MergeSort(int arr[],int l,int r){
    if(l < r){
        int mid=l+(r-l)/2;
        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,r);
        Merge(arr,l,mid,r);
    }
}


void printArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}

int main(){
  int arr[]={5,4,3,2,1};
  int size=sizeof(arr)/sizeof(arr[0]);

  printArray(arr,size);
  MergeSort(arr,0,size-1);
  printArray(arr,size);
  
  return 0;
}