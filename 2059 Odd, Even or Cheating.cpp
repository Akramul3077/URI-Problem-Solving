#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, x, y, b, c, res, sum;
    cin>>a>>x>>y>>b>>c;

    sum=x+y;

    if((sum%2==0&&a==1)||(sum%2==1&&a==0)){
        res=1;
    }else{
        res=2;
    }
    if((b==1&&c==0)||(b==0&&c==1)){
            res=1;
    }else if(b==1&&c==1){
            res=2;
    }
    cout<<"Jogador "<<res<<" ganha!"<<endl;


return 0;}
