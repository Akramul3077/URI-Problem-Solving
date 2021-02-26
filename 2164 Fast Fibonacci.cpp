#include<bits/stdc++.h>
using namespace std;

int main(){
    double n, x, y, ans;
    cin>>n;
    x = (1 + sqrt(5))/2.0;
    y = (1 - sqrt(5))/2.0;
    ans = (pow(x,n) - pow(y,n))/sqrt(5);
    cout<<fixed<<setprecision(1)<<ans<<endl;

return 0;}
