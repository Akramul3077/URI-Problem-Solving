#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin>>a;
    int b[a],i,ans;
    double c[a],m=0.0;

    for(i=0;i<a;i++){
        cin>>b[i]>>c[i];
    }
    for(i=0;i<a;i++){
        if(c[i]>m){
            m=c[i];
            ans=i;
        }
    }

    if(m<8){
        cout<<"Minimum note not reached"<<endl;
    }else{
        cout<<b[ans]<<endl;
    }

return 0;}
