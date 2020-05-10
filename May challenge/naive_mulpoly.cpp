#include<iostream>
#include<bits/stdc++.h>
using namespace std;

multpoly(a,b,n){

int prod=  a[2n-1];
for (int i=0;i<2n-2;i++){
prod[i]= 0;
for (int i=0;i<n-1;i++){
for(int j=0;j<n-1;j++){
prod[i+j]= prod[i+j]+ a[i]*b[j];
return prod;


int main(){
int n;
cin>>n;
int a[2n-1],b[2n-1];
multpoly(a,b,n);
return 0;
}