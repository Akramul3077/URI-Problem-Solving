#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,i,c,d=0,e=0,f=0,g;
    double x,y,z;
    char m[2],n[2],p[2],q[2];
    cin>>a;
    for(i=1;i<=a;i++){
        cin>>c>>m;
        if(m[0]=='C'){
            d+=c;
        }else if(m[0]=='R'){
            e+=c;
        }else if(m[0]=='S'){
            f+=c;
        }
    }
    g=d+e+f;
    x=(d/(g*1.0))*100.00;
    y=(e/(g*1.0))*100.00;
    z=(f/(g*1.0))*100.00;
    cout<<"Total: "<<g<<" cobaias"<<endl;
    cout<<"Total de coelhos: "<<d<<endl;
    cout<<"Total de ratos: "<<e<<endl;
    cout<<"Total de sapos: "<<f<<endl;
    cout<<fixed;
    cout<<setprecision(2)<<"Percentual de coelhos: "<<x<<" %"<<endl;
    cout<<setprecision(2)<<"Percentual de ratos: "<<y<<" %"<<endl;
    cout<<setprecision(2)<<"Percentual de sapos: "<<z<<" %"<<endl;
    return 0;
}
