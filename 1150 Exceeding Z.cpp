#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,z,i,ans=0,a;
    cin>>x;
    do{
        cin>>z;
    }while(x>=z);

    for(i=x,a=0; a<z; i++){
        a+=i;
        ans++;
    }
    cout<<ans<<endl;
    return 0;}
