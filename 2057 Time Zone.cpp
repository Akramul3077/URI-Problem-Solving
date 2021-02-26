#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d=0;
    while(cin>>a){
        cin>>b>>c;
        d=a+b+c;
        if(d==24){
            d=0;
        }else if(d>24){
            d-=24;
        }else if(d<0){
            d+=24;
        }
        cout<<d<<endl;
        d=0;
    }

return 0;}
