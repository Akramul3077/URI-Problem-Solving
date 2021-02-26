#include <bits/stdc++.h>
using namespace std;

int main(){

    double a=0.0, M[12][12];
    char T[2];
    int C,x,y,z,p=10,q=1;
    cin>>T;
    for(x=0;x<=11;x++)
{
        for(y=0; y<=11; y++)
            cin>>M[x][y];
    }
    for(z=0; z<=4;z++)
    {
        for(C=q; C<=p;C++){
            a+=M[z][C];
        }
            p--;
            q++;
    }
    if(T[0]=='S')
        cout<<fixed<<setprecision(1)<<a<<endl;
    else if(T[0]=='M'){
        a=a/30.0;
        cout<<fixed<<setprecision(1)<<a<<endl;
    }
    return 0;
}
