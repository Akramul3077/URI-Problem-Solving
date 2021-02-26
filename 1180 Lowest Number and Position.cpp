#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,x[1000],Min=0,ind=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x[i];
        if(x[i]<Min){
            Min=x[i];
            ind=i;
        }
    }
    cout<<"Menor valor: "<<Min<<endl;
    cout<<"Posicao: "<<ind<<endl;

return 0;}
