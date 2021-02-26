#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,H=0;
    cin>>a>>b;

    if(a<b){
        H=b-a;
        cout<<"O JOGO DUROU "<<H<<" HORA(S)"<<endl;
    }else if(a>b){
        H=24-(a-b) ;
        cout<<"O JOGO DUROU "<<H<<" HORA(S)"<<endl;
    }else if(a==b){
        H=24;
        cout<<"O JOGO DUROU "<<H<<" HORA(S)"<<endl;
    }


return 0;}
