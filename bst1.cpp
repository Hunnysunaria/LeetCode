#include<iostream>
using namespace std;

struct node{
    int data;
    node *left;
    node *right;
};
node *root= NULL;

node* get_node(int data){
    node *temp= new node();
    temp->data= data;
    temp->left= NULL;
    temp->right= NULL;

    return temp;   
}
// BST class

class binaryst{
    public:
// Inserting a element in a node;

    node* insert(int data,node* root){
if(root == NULL){

    root= get_node(data);
}
else if(data<= root->data){

    root= insert(data,root->left);
}
else {
    root= insert(data,root->right);
}
return root;
}

// Searching in a binary tree

bool search(node *root, int data){
if(root== NULL){
    return false;
}

else if(data== root->data){
    return true;
}
else if(data < root->data){
    search(root->left,data);
}
else {
    search(root->right,data);
}
}

// preorder Traversal
void preorder(node *root){
    if(root == NULL){
        return ;
    }
    else{
        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }

}
// Inorder traversal

void Inorder(node *root){
       if(root == NULL){
        return ;
    }
    else{
       
        Inorder(root->left);
         cout<<root->data<<" ";
        Inorder(root->right);
    }
}
// Postorder traversal

void Postorder(node *root){
       if(root == NULL){
        return ;
    }
    else{
       
        Postorder(root->left);
        Postorder(root->right);
         cout<<root->data<<" ";

    }
}
    };

int main(){
    cout<<"Binary Search Tree";
    binaryst b;

    for(int i=23;i<33;i++){
  root= b.insert(i,root);}

    int n;
    cin >>n;
    b.search(root,n);

cout<<"Preorder";
    b.preorder(root);
    cout<<"Postorder";
    b.Postorder(root);
    cout<<"Inorder";
    b.Inorder(root);
    return 0;
}