#include<iostream>
#include<bits/stdc++.h>
using namespace std;

struct treeNode{


    int data;

    int p;
    treeNode *left;
    treeNode *right;

};

treeNode *getnode(int data){


    treeNode *temp= new treeNode();

    temp->data= data;
    temp->left= nullptr;
    temp->right= nullptr;
    return temp;
}



class binarylst{

public:

treeNode* insert(int data,treeNode* root,int p){

    if(root== NULL){
cout<<p;
cout<<"\n";

        root= getnode(data);
    }

    else if(data<= root->data){

        root= insert(data,root->left,2*p);
    }
    else{

        root= insert(data,root->right,2*p+1);
    }
    return root;
}


void preorder(treeNode* root){
    if(root== NULL){
        return;
    }
    else{

        cout<<root->data<<" ";
        preorder(root->left);
        preorder(root->right);
    }
}

};


int main(){
treeNode* root= NULL;
    binarylst b;


vector<int> a={1,2,0,5};

for(int i=0;i<a.size();i++)
        root= b.insert(a[i],root,1);


    cout<<"Preorder\n";
    b.preorder(root);

    return 0;
}
