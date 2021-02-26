#include<bits/stdc++.h>
using namespace std;


int main(){
    int i,n,a,c;
    char b;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a==c){
            cout<<a*c<<endl;
        }else if(b>=65 && b<=90){
            cout<<c-a<<endl;
        }else{
            cout<<c+a<<endl;
        }

    }



return 0;}
