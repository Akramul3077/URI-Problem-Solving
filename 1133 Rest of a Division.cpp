#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,x,y,sm,lg;

    cin>>x>>y;
    if(x>y){
        sm=y;
        lg=x;
    }else{
        sm=x;
        lg=y;
    }

    for(i=sm+1;i<lg;i++){
        if(i%5==2 || i%5==3){
            cout<<i<<endl;
        }
    }


return 0;}
