#include<bits/stdc++.h>
using namespace std;


int main(){
    long long int n,h,f,tu,te,fi,tw,on,temp;
    cin>>n;
    h=n/100;
    temp=n%100;
    f=temp/50;
    temp=temp%50;
    tu=temp/20;
    temp=temp%20;
    te=temp/10;
    temp=temp%10;
    fi=temp/5;
    temp=temp%5;
    tw=temp/2;
    temp=temp%2;
    on=temp;

    cout<<n<<endl;
    cout<<h<<" nota(s) de R$ 100,00"<<endl;
    cout<<f<<" nota(s) de R$ 50,00"<<endl;
    cout<<tu<<" nota(s) de R$ 20,00"<<endl;
    cout<<te<<" nota(s) de R$ 10,00"<<endl;
    cout<<fi<<" nota(s) de R$ 5,00"<<endl;
    cout<<tw<<" nota(s) de R$ 2,00"<<endl;
    cout<<on<<" nota(s) de R$ 1,00"<<endl;

return 0;}
