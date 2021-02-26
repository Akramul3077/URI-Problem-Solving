#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    char n[10100];
    cin>>a;
    while(a--)
    {
        cin>>n;
        b = strlen(n);
        cout<<fixed<<setprecision(2)<<b*.01<<endl;
    }
return 0;}
