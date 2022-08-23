#include<iostream>
using namespace std;

#define MAX 10

class Stack{
    int top;
  public:
     int arr[MAX];

     Stack(){
         top=-1;
     }
     bool isEmpty(){
         if(top == -1){
             return true;
         }
         return false;
     }
     
     bool isFull(){
         if(top == MAX-1){
             return true;
         }
         return false;
     }

     void push(int data){
         if(isFull()){
             cout<<"Stack Is Full Cant Add More\n";
             return;
         }
         top+=1;
         arr[top]=data;
         return;
     }

     void pop(){
         if(isEmpty()){
             cout<<"Stack is Empty\n";
             return;
         }
         int val=arr[top];
         top-=1;
         cout<<"Poped Value is "<<val<<"\n";
         return;

     }
     void printStack(){
         for(int i=top;i>=0;i--){
             cout<<arr[i]<<" ";
         }
         cout<<"\n";
     }
};

int main(){
   class Stack s;

   s.push(20);
   s.push(30);
   s.push(40);
   s.printStack();
   s.pop();
   s.printStack();

}