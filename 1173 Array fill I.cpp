#include<bits/stdc++.h>
using namespace std;

int main(){
    int a[10],n,i;
    cin>>n;
    for(i=0;i<10;i++){
        a[i]=n;
        cout<<"N["<<i<<"] = "<<a[i]<<endl;
        n=n*2;
    }
return 0;}
