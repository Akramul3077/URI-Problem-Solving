#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=0;
    double n,sum=0,ans=0;
    while(a==0 || a==1){
        cin>>n;
        if(n>=0 && n<=10){
            sum+=n;
            a++;
        }else{
            cout<<"nota invalida"<<endl;
        }
    }
    ans=sum/2.0;
    cout<<"media = "<<ans<<endl;


return 0;}
