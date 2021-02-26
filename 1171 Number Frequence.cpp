#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,a[2001],ab[2001],x,counter=0;

    fill(a,a+2001,0);
    cin>>n;

    for(int i=0;i<n;++i){
        cin>>x;
        a[x]+=1;
    }

    for(int i=0;i<2001;++i){
        if(a[i] !=0){
            cout <<i<<" aparece "<<a[i]<<" vez(es)"<<endl;
        }
    }

return 0;}
