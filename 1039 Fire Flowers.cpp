#include<bits/stdc++.h>
using namespace std;

int main(){
    int R,X,Y,r,x,y;
    float d;
    while((scanf("%d%d%d%d%d%d",&R,&X,&Y,&r,&x,&y))!=EOF){
        d=sqrt(pow((X-x),2)+pow((Y-y),2));
        if(R>=d+r){
            cout<<"RICO"<<endl;
        }else{
            cout<<"MORTO"<<endl;
        }
    }
return 0;}
