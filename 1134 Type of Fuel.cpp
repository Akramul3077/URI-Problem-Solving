#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,al=0,ga=0,di=0;

    while(1){
        cin>>n;
        if(n==1){
            al++;
        }else if(n==2){
            ga++;
        }else if(n==3){
            di++;
        }else if(n==4){
            break;
        }
    }
    cout<<"MUITO OBRIGADO"<<endl;
    cout<<"Alcool: "<<al<<endl;
    cout<<"Gasolina: "<<ga<<endl;
    cout<<"Diesel: "<<di<<endl;


return 0;}

