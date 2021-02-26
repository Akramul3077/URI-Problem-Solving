#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,e,f,g,h;
    while(1){
        cin>>a;
        if(a==0){
          break;
        }else{
            cin>>b>>c;
            d=a*b;
            e=(d*100)/c;
            f=pow(e,.5);
            cout<<f<<endl;
        }
    }
return 0;}
