#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,a,b,c,d;
    cin>>n;
    for(i=1;i<=n;i++){
        a=i*i;
        b=i*i*i;
        cout<<i<<" "<<a<<" "<<b<<endl;
        c=a+1;
        d=b+1;
        cout<<i<<" "<<c<<" "<<d<<endl;
    }

return 0;}
