#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c=0,d=0,e=0,f,g,h,i,j=0,k=0,l=0;

    while(true){
        cin>>a>>b;
        if(a>b){
            l++;
        }
        if(a<b){
            k++;
        }
        if(a==b){
            j++;
        }
        c+=a;
        d+=b;
        e++;
        cout<<"Novo grenal (1-sim 2-nao)"<<endl;
        cin>>f;
        if(f==1)
            continue;
        if(f==2)
            break;
    }
    cout<<e<<" grenais"<<endl;
    cout<<"Inter:"<<l<<endl;
    cout<<"Gremio:"<<k<<endl;
    cout<<"Empates:"<<j<<endl;
    if(l>k){
        cout<<"Inter venceu mais"<<endl;
    }
    if(l<k){
        cout<<"Gremio venceu mais"<<endl;
    }
    if(k==l){
      cout<<"Nao houve vencedor"<<endl;
    }
return 0;}
