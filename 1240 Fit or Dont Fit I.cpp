#include <bits/stdc++.h>
using namespace std;

int numD(long long num){
    int d=0;

    while(num){
        num/=10;
        d++;
    }

return d;}


int main(){
    int n,i;
    long long x, y, v, z;

    cin>>n;

    for(i=0;i<n;i++){
            cin>>x>>y;
            z = numD(y);
            z=ceil(pow(10,z));
            v= x%z;
            if(v==y){
                cout<<"encaixa"<<endl;
            }else{
                cout<<"nao encaixa"<<endl;
            }
    }
return 0;}
