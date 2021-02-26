#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n;
    while(scanf("%llu",&n)){
        if(n==-1){
            break;
        }
        if(n==0){
            cout<<0ll<<endl;
        }else{
            cout<<n-1ll<<endl;
        }
    }

return 0;}
