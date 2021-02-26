#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,a,n,m=0;
    cin>>a>>n;
    while(n<=0){
        cin>>n;
    }
    for(i=a;i<a+n;i++){
        m+=i;
    }
    cout<<m<<endl;
return 0;}
