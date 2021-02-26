#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    double a,b,c,ans;

    cin>>n;

    for (int i = 0; i < n; ++i){
        cin>>a>>b>>c;

        ans = ((a/10) * 2) + ((b/10) * 3) + ((c/10) * 5);

        cout<<fixed;
        cout<<setprecision(1)<<ans<<endl;
 }

 return 0;
}
