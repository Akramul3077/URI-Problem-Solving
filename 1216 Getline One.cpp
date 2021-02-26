#include<bits/stdc++.h>
using namespace std;

int main(){
    double Count=0,x,ans,sum=0;
    string n;
    char c;
    while(getline(cin,n)){
        cin >> x;
        c = getchar();
        sum += x;
        Count++;
    }
    ans=sum/Count;
    cout<<fixed;
    cout<<setprecision(1)<<ans<<endl;




return 0;}
