#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,i,ca=0,cb=0;

    while(cin>>n && n!=0){
        for(i=0;i<n;i++){
            cin>>a>>b;
            if(a>b){
                ca++;
            }else if(b>a){
                cb++;
            }
        }
        cout<<ca<<" "<<cb<<endl;
        ca=0;
        cb=0;
    }


return 0;}
