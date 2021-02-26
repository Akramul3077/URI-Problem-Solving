#include<bits/stdc++.h>
using namespace std;


int main(){
    int x,y;

    while(true){
        cin>>x>>y;
        if(x==y){
            break;
        }

        if(x>y){
            cout<<"Decrescente"<<endl;
        }else if(x<y){
            cout<<"Crescente"<<endl;
        }
    }



return 0;}
