#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,ans=1;
    cin>>n;
    if(n>0 && n<13){
        for(i=0;i<(n-1);i++){
            ans*=(n-i);
        }
        cout<<ans<<endl;
    }



return 0;}
