#include<bits/stdc++.h>
using namespace std;


int main(){
    int x,y,sum=0,i,Min,Max;
    cin>>x>>y;
    if(x>y){
        Max=x;
        Min=y;
    }else{
        Max=y;
        Min=x;
    }

    for(i=(Min+1);i<Max;++i){
        if(i%2==1||i%2==-1){
            sum+=i;

        }

    }
    cout<<sum<<endl;
return 0;}


