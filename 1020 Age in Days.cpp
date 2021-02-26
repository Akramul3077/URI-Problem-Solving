#include<bits/stdc++.h>
using namespace std;

int main(){
    int n ,ano, mes,dia,d;
    cin>>n;


    ano=n/365;
    dia=n%365;
    mes=dia/30;
    d =dia%30;

    cout<<ano<<" ano(s)"<<endl;
    cout<<mes<<" mes(es)"<<endl;
    cout<<d<<" dia(s)"<<endl;


return 0;}
