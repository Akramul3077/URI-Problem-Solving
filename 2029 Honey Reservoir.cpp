#include<bits/stdc++.h>
using namespace std;

int main(){
    double x,y,r,h,a,pi=3.14;
    int tmp;
    while(cin>>x>>y){
        r = y/2;
        a = pi*r*r;
        h = x/a;
        cout<<fixed;
        cout<<setprecision(2)<<"ALTURA = "<<h<<endl;
        cout<<setprecision(2)<<"AREA = "<<a<<endl;
    }
return 0;}
