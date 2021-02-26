#include <bits/stdc++.h>
using namespace std;

int main(){
    int C,i,j;
    char T[2];
    double a=0.0,M[12][12];

    cin>>C>>T;

    for(i=0;i<=11;i++){
        for(j=0; j<=11; j++){
            cin>>M[i][j];
            if(j==C){
                a+=M[i][j];
            }
        }
    }
    if(T[0]=='S'){
       cout<<fixed<<setprecision(1)<<a<<endl;
    }else if(T[0]=='M'){
        a=a/12.0;
        cout<<fixed<<setprecision(1)<<a<<endl;
    }
return 0;}
