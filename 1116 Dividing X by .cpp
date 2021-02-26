#include<bits/stdc++.h>
using namespace std;


int main(){
    int n;
    double x,y,ans;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(y==0){
            cout<<"divisao impossivel"<<endl;
        }else{
            ans=x/y;
            cout<<fixed;
            cout<<setprecision(1)<<ans<<endl;
        }
    }

return 0;}
