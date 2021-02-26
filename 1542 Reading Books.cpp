#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,pag=0;
    while(1){
        cin>>a;
        if(a==0){
            break;
        }
        cin>>b>>c;
        pag=(a*b*c)/(c-a);
        if(pag==1){
            cout<<pag<<" pagina"<<endl;
        }else{
            cout<<pag<<" paginas"<<endl;
        }
    }

return 0;}
