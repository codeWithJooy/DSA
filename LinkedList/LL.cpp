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

      /*Add Data Before A Node*/
      void AddBeforeANode(int data,int element){
          
          Node* newNode=new Node(data);
          Node* current=this->head;
          if(this->head==NULL){
              cout<<"List is Empty";
              return;
          }
          
          while(current->next!=NULL && current->next->data!=element){
              current=current->next;
          }
          if(current->next!=NULL){
            newNode->next=current->next;
            current->next=newNode;
            return;
          }
          cout<<"Element Not Present\n";
      }
      
      /*Add Data After A Node*/
      void AddAfterANode(int data,int element){
          
          Node* newNode=new Node(data);
          Node* current=this->head;
          if(this->head==NULL){
              cout<<"List is Empty";
              return;
          }
          
          while( current!=NULL && current->data!=element){
              current=current->next;  
           }
          if(current!=NULL){
              newNode->next=current->next;
              current->next=newNode;
              return;
          }
          cout<<"Element Not Present\n";
      }
      
      void deleteFirst(){
         Node *current=this->head;
         this->head=current->next;

         free(current);
      }

      void deleteLast(){
         Node *current=this->head;
         while(current->next->next!=NULL){
             current=current->next;
         }
         Node *temp=current->next;
         current->next=NULL;
         free(temp);
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
    // head->pushToFront(5);
    // head->pushToFront(15);
    // head->pushToFront(25);
    head->pushToEnd(5);
    head->pushToEnd(15);
    head->pushToEnd(25);
    head->AddAfterANode(30,25);
    head->AddBeforeANode(20,30);
    head->AddBeforeANode(22,35);
    head->printLL();

    // cout<<"\nAfter Deleting from Start\n";
    // head->deleteFirst();
    // head->printLL();

    // cout<<"\nAfter Deleting from End\n";
    // head->deleteLast();
    // head->printLL();

    cout<<"\nAfter Reversing the List\n";
    head->reverse();
    head->printLL();

    return 0;
}