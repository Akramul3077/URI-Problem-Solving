#include <bits/stdc++.h>
using namespace std;

int main(){
    int C,i,j,k,p=1;
    char T[2];
    double a=0.0, M[12][12];

    cin>>T;

    for(i=0;i<=11;i++){
        for(j=0; j<=11; j++){
             cin>>M[i][j];
        }

    }
    for(k=0; k<=11;k++){
        for(C=p; C<=11;C++){
           a+=M[k][C];
        }
        p++;
    }
    if(T[0]=='S')
        cout<<fixed<<setprecision(1)<<a<<endl;
    else if(T[0]=='M'){
        a=a/66.0;
        cout<<fixed<<setprecision(1)<<a<<endl;
    }
return 0;}
