#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,i,Max=0;
    while(scanf("%d",&n)!=EOF){

        for(i=0;i<n;i++){
            cin>>a;
            if(Max<a){
                Max=a;
            }
        }
        if(Max<10){
            cout<<"1"<<endl;
        }else if(Max<20){
            cout<<"2"<<endl;
        }else{
            cout<<"3"<<endl;
        }
        Max=0;

    }


return 0;}
