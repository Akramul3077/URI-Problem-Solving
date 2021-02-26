#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,sum=0;
    double c=0,avg=0;

    while(true){
        cin>>n;
        if(n<0){
            break;
        }else{
            sum+=n;
            c++;
        }
    }
    avg=sum/c;
    cout<<fixed;
    cout<<setprecision(2)<<avg<<endl;


return 0;}
