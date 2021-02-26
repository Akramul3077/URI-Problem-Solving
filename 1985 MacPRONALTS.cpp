#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,a,b;
    double x=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b;
        if(a==1001){
            x+=1.50*b;
        }else if(a==1002){
            x+=2.50*b;
        }else if(a==1003){
            x+=3.50*b;
        }else if(a==1004){
            x+=4.50*b;
        }else if(a==1005){
            x+=5.50*b;
        }
    }
    cout<<fixed<<setprecision(2)<<x<<endl;



return 0;}
