#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,x,y;
    double m,n,ans;

    cin>>a>>x>>m;
    cin>>b>>y>>n;

    ans=(x*m)+(y*n);

    cout<<fixed;
    cout<<setprecision(2)<<"VALOR A PAGAR: R$ "<<ans<<endl;

return 0;}
