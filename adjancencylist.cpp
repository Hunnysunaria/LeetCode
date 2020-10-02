// creating adjacency list using vector 
// vector is cache friendly

#include<iostream>
#include<bits/stdc++.h>
using namespace std;




void addlst(vector<int> a[], int u,int v){



a[u].push_back(v);
a[v].push_back(u);

}


void printt(vector<int> a[], int v){

    for(int i=0;i<v;i++){

        cout<<"The Adjacency list is "<<i<<" of head is \n";

        for(int m: a[i]){
cout<<m;

printf("\n");
        }
    }
}


int main(){

    int v=8;
   
   vector<int>*a= new vector<int> [v];
   addlst(a, 0, 1); 
    addlst(a, 0, 4); 
    addlst(a, 1, 2); 
    addlst(a, 1, 3); 
    addlst(a, 1, 4); 
    addlst(a, 2, 3); 
    addlst(a, 3, 4); 
printt(a,v);

    return 0;
}