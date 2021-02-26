#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int div=0;
        int count=0;
        int mod=0;
        while(true){
            mod=(mod*10)+1;
            count++;
            mod=mod%n;
            if(!mod)break;
        }
        cout<<count<<endl;
    }
return 0;}
