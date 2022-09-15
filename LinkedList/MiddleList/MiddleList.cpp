#include<iostream>
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
    int middleType2(){
      Node *slow=this->head;
      Node *fast=this->head;

      while(fast->next!=NULL && fast->next->next!=NULL){
          fast=fast->next->next;
          slow=slow->next;
      }
      if(fast->next!=NULL){
          slow=slow->next;
      }
      return slow->data;
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
  head->pushAtEnd(10);
  head->pushAtEnd(20);
  head->pushAtEnd(30);
  head->pushAtEnd(40);
  head->pushAtEnd(50);
  head->pushAtEnd(60);
  head->pushAtEnd(70);
  cout<<"Middle of The List is "<<head->middleType2()<<"\n";
  head->printLL();

  return 0;
}