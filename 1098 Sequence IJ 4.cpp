#include<bits/stdc++.h>
using namespace std;

int main(){
    double i=0.0,j=1.0,k,l;
    for(i=0;i<=2;i=i+0.2){
        for(j=1;j<=3;j++){
            if(i>0.0 && i <1.0)
           cout<<"I="<<i<<" "<<"J="<<j+i<<endl;
           else if(i>1.0 && i<2.0)
            cout<<"I="<<i<<" "<<"J="<<j+i<<endl;
            else {
                 k= i;
                    l=k + j;
            cout<<"I="<<k<<" "<<"J="<<l<<endl;
           }
        }
    }


return 0;}
