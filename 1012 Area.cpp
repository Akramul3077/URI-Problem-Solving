#include<bits/stdc++.h>
using namespace std;


int main(){
    double a,b,c;
    double pi=3.14159,tri,cri,tra,qua,ret;
    cin>>a>>b>>c;
    tri =0.5*a*c;
    cri =pi*(c*c);
    tra=(a+b)/2*c;
    qua=b*b;
    ret=a*b;
    cout<<fixed;
    cout<<setprecision(3)<<"TRIANGULO: "<<tri<<endl;
    cout<<setprecision(3)<<"CIRCULO: "<<cri<<endl;
    cout<<setprecision(3)<<"TRAPEZIO: "<<tra<<endl;
    cout<<setprecision(3)<<"QUADRADO: "<<qua<<endl;
    cout<<setprecision(3)<<"RETANGULO: "<<ret<<endl;

return 0;}
