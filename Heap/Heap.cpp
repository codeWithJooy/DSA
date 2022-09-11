#include<iostream>
#include<climits>
using namespace std;

// A utility function to swap two elements
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

class MinHeap{
    int *harr;
    int hSize;
    int capacity;
    public:
       MinHeap(int c);

       void MinHeapify(int );

       int parent(int i){ return (i-1)/2 ;}

       int left(int i){ return (2*i+1);}

       int right(int i){return (2*i+2);}

       void insertKey(int );

       int extractMin();

       int getMin(){return harr[0];}

       void decreaseKey(int ,int );

       void deleteKey(int );

};

MinHeap :: MinHeap(int cap){
   hSize=0;
   capacity=cap;
   harr=new int[cap];
}

void MinHeap :: MinHeapify(int i){
    int l = left(i);
    int r = right(i);
    int smallest=i;

    if( l < hSize && harr[l] < harr[i] )
       smallest=l;
    if( r < hSize && harr[r] < harr[smallest] )
       smallest=r;

    if(smallest !=i ){
        swap(&harr[i], &harr[smallest]);
        MinHeapify(smallest);
    }      

}

void MinHeap :: insertKey( int k){
    if(hSize == capacity){
        cout<<"\n Heap Is Full.Cannot add more\n";
        return;
    }
    hSize++;
    int i=hSize-1;
    harr[i]=k;

    while(i !=0 && harr[parent(i)] > harr[i] ){
        swap(&harr[parent(i)],&harr[i]);
        i=parent(i);
    }
}

int MinHeap :: extractMin() {
    if(hSize <=0){
        return INT_MAX;
    }
    if(hSize == 1){
        hSize--;
        return harr[0];
    }

    int root=harr[0];
    harr[0]=harr[hSize - 1];
    hSize--;
    MinHeapify(0);

    return root;
}

void MinHeap :: decreaseKey(int i,int new_val){
    harr[i]=new_val;
    while(i != 0 && harr[i] < harr[parent(i)]){
        swap(harr[i],harr[parent(i)]);
        i=parent(i);
    }
}

void MinHeap :: deleteKey(int i){
    decreaseKey(i,INT_MIN);
    extractMin();
}

int main(){
    MinHeap h(11);
    h.insertKey(3);
    h.insertKey(2);
    h.insertKey(15);
    h.insertKey(5);
    h.insertKey(4);
    h.insertKey(45);

    cout<<"Element at top is "<<h.getMin()<<"\n";
    return 0;
}