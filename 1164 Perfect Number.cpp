#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,x,b,a;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        b=(x/2);
        a=0;
        for(int j=1;j<=b;j++){
            if((x%j)==0){
                a+=j;
            }
        }
        if(a==x){
            cout<<x<<" eh perfeito"<<endl;
        }else{
            cout<<x<<" nao eh perfeito"<<endl;
        }
    }



return 0;}
