#include<bits/stdc++.h>
using namespace std;

int main(){
    double a,i,c=0,sum=0,ave=0;
    for(i=0;i<6;i++){
        cin>>a;
        if(a>0){
            c++;
            sum+=a;
        }
    }
    ave=sum/c;
    cout<<c<<" valores positivos"<<endl;
    cout<<fixed;
    cout<<setprecision(1)<<ave<<endl;

return 0;}


