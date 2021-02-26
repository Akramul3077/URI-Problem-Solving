#include<bits/stdc++.h>
using namespace std;

int main(){
    int i, a[10];
    for(i=0;i<10;i++){
        cin>>a[i];
        if(a[i]<=0){
            cout<<"X["<<i<<"] = 1"<<endl;
        }else{
            cout<<"X["<<i<<"] = "<<a[i]<<endl;
        }

    }


return 0;}
