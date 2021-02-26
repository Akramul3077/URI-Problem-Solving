#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,a,n[1000],b=0;
    cin>>a;
    for(i=0;i<1000;i++){
        cout<<"N["<<i<<"] = "<<b<<endl;
        b++;
        if(b>=a){
            b=0;
        }

    }


return 0;}
