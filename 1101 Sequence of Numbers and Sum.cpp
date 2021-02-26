#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,m,n,sum=0;

    while(true){
        cin>>m>>n;
        if(m<=0 ||n<=0){
            break;
        }
        if(m<n){
            for(i=m;i<=n;i++){
               cout<<i<<" ";
               sum+=i;
            }
            cout<<"Sum="<<sum<<endl;
        }
        if(m>n){
            for(i=n;i<=m;i++){
               cout<<i<<" ";
               sum+=i;
            }
            cout<<"Sum="<<sum<<endl;
        }
        sum=0;

    }


return 0;}
