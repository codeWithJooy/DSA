#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node *next;
      Node *prev;
      Node(int data){
          this->data=data;
          this->next=NULL;
          this->prev=NULL;
      } 
};

class DLL{
    public:
      Node *head;
      DLL(){
          this->head=NULL;
      }
      void addAtFront(int data){
          Node *newNode=new Node(data);
          if(this->head==NULL){
              this->head=newNode;
              return;
          }
          newNode->next=this->head;
          this->head->prev=newNode;
          this->head=newNode;
          return;
      }

      void printAllBack(){
        Node *current=this->head;
        while(current->next!=NULL){
            current=current->next;
        }

        while(current!=NULL){
            cout<<current->data<<" ";
            current=current->prev;
        }
      }

      void printAll(){
         Node *current=this->head;
         while(current!=NULL){
             cout<<current->data<<" ";
             current=current->next;
         }
      }

};

int main(){
         DLL *head=new DLL();
         head->addAtFront(2);
         head->addAtFront(5);
         head->addAtFront(10);

         head->printAll();

         head->printAllBack();

         return 0;
         }