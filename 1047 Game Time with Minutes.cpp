#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,d,t,m;
    cin>>a>>b>>c>>d;
    t=c-a;
    if(t<0){
        t=24+(c-a);
    }
    m=d-b;
    if(m<0){
        m=60+(d-b);
        t--;
    }

    if(a==c && b==d){
        cout<<"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)"<<endl;
    }else{
        cout<<"O JOGO DUROU "<<t<<" HORA(S) E "<<m<<" MINUTO(S)"<<endl;
    }


return 0;}
