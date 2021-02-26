#include <bits/stdc++.h>
using namespace std;

int main(){
    int x,y,m=0;
    while(scanf("%d:%d",&x,&y)!=EOF){
        cout<<"Atraso maximo: ";
        if(x<7||(x==7&&y==0)){
            cout<<"0"<<endl;
        }else{
            m=((x+1)-8)*60+y;
            cout<<m<<endl;
        }
    }
return 0;}
