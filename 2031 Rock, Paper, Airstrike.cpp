#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main(){
    int a;
    char x[10], y[10];
    cin>>a;
    while(a--){
        cin>>x>>y;
        if(x[1]=='e'&& y[1]=='e'){
            cout<<"Sem ganhador"<<endl;
        }else if(x[1]=='t'&&y[1]=='t'){
            cout<<"Aniquilacao mutua"<<endl;
        }else if(x[1]=='a'&&y[1]=='a'){
            cout<<"Ambos venceram"<<endl;
        }else if(x[1]=='t' || (x[1]=='e' && y[1]=='a')){
            cout<<"Jogador 1 venceu"<<endl;
        }else{
            cout<<"Jogador 2 venceu"<<endl;
        }
    }
return 0;}
