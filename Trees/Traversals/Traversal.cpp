#include<iostream>
using namespace std;

class Tree{
   int data; 
   
   public: 
   Tree* left;
   Tree* right;
   Tree(){

   }
   Tree(int data){
       this->data=data;
       this->left=NULL;
       this->right=NULL;
   }

   Tree* insertNode(int data){
       Tree* newNode=new Tree(data);
       return newNode;
   }

   void preOrder(Tree *root){
       if(root==NULL)
         return;
       cout<<root->data<<" ";
       preOrder(root->left);
       preOrder(root->right);  
   }

    void inOrder(Tree *root){
       if(root==NULL)
         return;
       inOrder(root->left);
       cout<<root->data<<" ";
       inOrder(root->right);  
   }

    void postOrder(Tree *root){
       if(root==NULL)
         return;
       
       postOrder(root->left);
       postOrder(root->right);  
       cout<<root->data<<" ";
   }
};

int main(){
    Tree *root=NULL;
    Tree* b=new Tree();
    root=b->insertNode(10);
    root->left=b->insertNode(20);
    root->right=b->insertNode(30);
    root->left->left=b->insertNode(40);
    root->left->right=b->insertNode(50);
    root->right->left=b->insertNode(60);
    root->right->right=b->insertNode(70);

    cout<<"PreOrder Traversal Is\n";
    b->preOrder(root);
    cout<<"\n";

    cout<<"InOrder Traversal Is\n";
    b->inOrder(root);
    cout<<"\n";

    cout<<"PostOrder Traversal Is\n";
    b->postOrder(root);
    cout<<"\n";


    return 0;
}