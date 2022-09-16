#include<iostream>
#include <cstdlib>
using namespace std;

class Node{
    public:
       int data;
       Node* next;
       Node(int data){
           this->data=data;
           this->next=NULL;
       }
};

class LinkedList{
    public:
      Node* head;
      LinkedList(){
          this->head=NULL;
      }
      /*Add Data At The Start Of List*/
      void pushToFront(int data){
          Node* newNode=new Node(data);
          newNode->next=this->head;
          this->head=newNode;
      }
      
      /*Add Data At The End Of List*/
      void pushToEnd(int data){
          Node* newNode=new Node(data);
          if(this->head==NULL){
              this->head=newNode;
              return;
          }
          Node* current=this->head;
          while(current->next!=NULL){
              current=current->next;
              
          }
          current->next=newNode;
      }


      void reverse(){
        Node *next=NULL;
        Node *prev=NULL;
        Node *current=this->head;

        while(current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
        } 
        this->head=prev; 
      }

      void printLL(){
          Node* current=this->head;
          while(current!=NULL){
              cout<<current->data<<" ";
              current=current->next;
          }
      }
};

int main(){
    LinkedList *head=new LinkedList();

    head->pushToEnd(5);
    head->pushToEnd(15);
    head->pushToEnd(25);

    head->printLL();


    cout<<"\nAfter Reversing the List\n";
    head->reverse();
    head->printLL();

    return 0;
}