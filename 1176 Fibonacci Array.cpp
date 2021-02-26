#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int i,j,m,n,f=0,s=1,ne;

    cin>>m;
    for(i=1;i<=m;i++,f=0,s=1){
       cin>>n;
       n=n+1;
       for (j=0;j<n;j++){
          if (j<=1){
            ne=j;
          }else{
             ne=f+s;
             f=s;
             s=ne;
          }
       }
          cout<<"Fib("<<n-1<<") = "<<ne<<endl;
   }
return 0;}
