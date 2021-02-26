#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,sum=0;

    while(true){
        cin>>n;
        if(n==0){
            break;
        }else if(n%2==0){
            for(i=n;i<=n+8;i+=2){
                    sum+=i;
            }
        }else{
            for(i=n+1;i<=n+9;i+=2){
                    sum+=i;
            }
        }
        cout<<sum<<endl;
        sum=0;
    }





return 0;}



