#include<iostream>
#include <cstdlib>
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

      void addAtEnd(int data){
          Node *newNode=new Node(data);
          if(this->head==NULL){
              this->head=newNode;
          }
          Node *current=this->head;
          while(current->next!=NULL){
              current=current->next;
          }
          newNode->prev=current;
          current->next=newNode;
      }
      
      void deleteFront(){
         if(this->head==NULL){
             cout<<"No Node to delete\n";
             return;
         } 
         Node *del=this->head;
         del->next->prev=NULL;
         this->head=del->next;

         free(del);
      }

      void deleteEnd(){
          if(this->head==NULL){
            cout<<"No Node to delete\n";
            return;
          }

          Node *current=this->head;
          while(current->next!=NULL){
              current=current->next;
          }
          current->prev->next=NULL;
          free(current);
      }

      void reverse(){
          Node *current=this->head;
          Node *temp=NULL;
          while(current!=NULL){
              temp=current->next;
              current->next=current->prev;
              current->prev=temp;
              temp=current;
          }
          this->head=temp;
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
         head->addAtEnd(20);

         cout<<"\nPrint From Start to End\n";
         head->printAll();

        //  head->deleteFront();

        //  head->deleteEnd();
         head->reverse();
         cout<<"\nPrint From Start to End\n";
         
         head->printAll(); 
        //  cout<<"\nPrint From End To Start\n"; 
        //  head->printAllBack();

         return 0;
         }