#include<bits/stdc++.h>
using namespace std;


int main(){
    int a,b,c,MaiorAB,s,MAX;
    cin>>a>>b>>c;
    MaiorAB=(a+b+abs(a-b))/2;
    MAX=(MaiorAB+c+abs(MaiorAB-c))/2;

    cout<< MAX<<" eh o maior"<<endl;

return 0;}

