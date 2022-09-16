#include<iostream>
#include <cstdlib>
#include<set>
using namespace std;

class Node{
    public:
      int data;
      Node *next;
      Node(int data){
          this->data=data;
          this->next=NULL;
      }
};

class LinkedList{
   public:
     Node *head;
     LinkedList(){
         this->head=NULL;
     }
     void pushAtEnd(int data){
         Node *newNode=new Node(data);
         if(this->head==NULL){
             this->head=newNode;
             return;
         }
         Node *current=this->head;
         while(current->next!=NULL){
             current=current->next;
         }
         current->next=newNode;

     } 

    void printLL(){
          Node* current=this->head;
          while(current!=NULL){
              cout<<current->data<<" ";
              current=current->next;
          }
      }
     
     void removeDuplicates(){
         Node* current=this->head;
         Node *prev=NULL;

         set<int>seen;

         while(current!=NULL){
             if(seen.find(current->data) != seen.end()){
                prev->next=current->next;

                free(current);
             }
             else{
                 seen.insert(current->data);
                 prev=current;
             }
             current=prev->next;
         }
     }

};

int main(){
  LinkedList *head=new LinkedList();
  head->pushAtEnd(10);
  head->pushAtEnd(20);
  head->pushAtEnd(20);
  head->pushAtEnd(40);
  head->pushAtEnd(40);
  head->pushAtEnd(60);
  head->pushAtEnd(60);
  cout<<"Before Duplicate Removal\n";
  head->printLL();

  cout<<"\nAfter Duplicate Removal\n";
  head->removeDuplicates();
  head->printLL();
  return 0;
}
