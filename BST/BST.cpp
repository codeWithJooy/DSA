#include<iostream>
using namespace std;

class BST{
    public:
      int data;
      BST *left;
      BST *right;
      BST(){

      }

      BST(int data){
          this->data=data;
          this->left=NULL;
          this->right=NULL;
      }

      BST* insert(BST* root,int num){
          if(root==NULL){
              return new BST(num);
          }
          if(root->data > num){
              root->left=insert(root->left,num);
          }
          else if(root->data < num){
              root->right=insert(root->right,num);
          }

          return root;
      }

      void inorder(BST* root){
          if(root==NULL){
              return;
          }
          inorder(root->left);
          cout<<root->data<<" ";
          inorder(root->right);
      }

      void search(BST* root,int num){
          if(root==NULL){
              cout<<"Number Not Present"<<"\n";
              return;
          }
          if(root->data==num){
              cout<<"Number Present"<<"\n";
              return;
          }
          else if(root->data > num){
              search(root->left,num);
          }
          else{
              search(root->right,num);
          }
      }
};

int main(){
    BST b,*root=NULL;
    root=b.insert(root,10);
    root=b.insert(root,5);
    root=b.insert(root,15);
    root=b.insert(root,16);
    root=b.insert(root,12);
    root=b.insert(root,3);
    root=b.insert(root,8);

    b.inorder(root);

    b.search(root,21);
    b.search(root,3);
}