#include<bits/stdc++.h>
using namespace std;


int main(){
    int i,j,k,n,x,y,sum=0;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x>>y;
        if(x<y){
            for(j=x+1;j<y;j++){
                if(j%2!=0){
                   sum+=j;
                }

            }
        }else if(x>y){
            for(k=y+1;k<x;k++){
                if(k%2!=0){
                   sum+=k;
                }
            }
        }
        cout<<sum<<endl;
        sum=0;
    }



return 0;}
