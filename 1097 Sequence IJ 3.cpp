#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n=7;
     for(i=1;i<=9;i=i+2){

        for(j=n;j>=n-2;j--){
            cout<<"I="<<i<<" "<<"J="<<j<<endl;
        }
        n=j+5;
    }


return 0;}

