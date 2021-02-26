#include<bits/stdc++.h>
using namespace std;

int main(){
    double n,a=0,b=0;
    cin>>n;

    if(n>=0.0&&n<=400.00){
        a=(n*15.0)/100.0;
        b=a+n;
        cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: 15 %"<<endl;


    }else if(n>=400.01&& n<=800.00){
        a=(n*12.0)/100.0;
        b=a+n;
        cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: 12 %"<<endl;

    }else if(n>=800.01&& n<=1200.00){
        a=(n*10.0)/100.0;
        b=a+n;
        cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: 10 %"<<endl;

    }else if(n>=1200.01&& n<=2000.00){
        a=(n*7.0)/100.0;
        b=a+n;
        cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: 7 %"<<endl;

    }else if(n>=2000.01){
        a=(n*4.0)/100.0;
        b=a+n;
        cout<<fixed;
        cout<<setprecision(2)<<"Novo salario: "<<b<<endl;
        cout<<setprecision(2)<<"Reajuste ganho: "<<a<<endl;
        cout<<"Em percentual: 4 %"<<endl;

    }




return 0;}
