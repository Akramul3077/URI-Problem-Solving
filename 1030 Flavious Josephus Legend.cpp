#include <bits/stdc++.h>
using namespace std;

int jpL(int n, int k, int st){
    if(n==1)
    return 1;

    int ne,su;
    ne=(st+k-2)%n+1;
    su=jpL(n-1,k,ne);

    if(su<ne){
        return su;
    }else{
        return su+1;
    }
}



int main(){
    int i,nc, n, k, s,m=1;
    cin>>nc;

    for(i=1;i<=nc;i++){
        cin>>n>>k;
        s = jpL(n,k,m);
        cout<<"Case "<<i<<": "<<s<<endl;
    }

return 0;}
