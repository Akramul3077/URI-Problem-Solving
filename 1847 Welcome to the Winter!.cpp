#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if(x>y){
        if(y>z){
            if((y-z)<(x-y)){
                cout<<":)"<<endl;
            }else{
                cout<<":("<<endl;
            }
        }else{
            cout<<":)"<<endl;
        }
    }else if(y>x){
        if(z>y){
            if((z-y)<(y-x)){
                cout<<":("<<endl;
            }else{
                cout<<":)"<<endl;
            }
        }else{
            cout<<":("<<endl;
        }
    }else if(z>y){
        cout<<":)"<<endl;
    }else{
        cout<<":("<<endl;
    }
return 0;}
