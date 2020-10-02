#include<iostream>
#include<bits/stdc++.h>
using namespace std;
/*
1≤T≤100
1≤N,B,M≤5,000
0≤xi<N for each valid i
*/
int main(){
int n,b,m;
int flag= 2;


int c=0;
cin>>n;
cin>>b;
cin>>m;

vector<int> arr;

for(int i=0;i<m;i++){

    cin>>arr[i];
}

for(int i=0;i<arr.size();i++){

        if(arr[i]<m){

            if(flag!=0){

                c++;
                flag=0;
            }
        }

        else if(arr[i]>=m){


            if(flag!=1){

                c++;
                flag=1;
            }
        }
}

cout<<c;

}
