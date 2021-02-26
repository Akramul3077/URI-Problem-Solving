#include<bits/stdc++.h>
using namespace std;

int main(){
    int n[20],temp[20];

    for(int i=0;i<20;i++){
        cin>>n[i];
    }
    for(int j=0;j<10;j++){
        temp[j]=n[j];
        n[j]=n[19-j];
        n[19-j]=temp[j];

    }
    for(int j=0;j<20;j++){
        cout<<"N["<<j<<"] = "<<n[j]<<endl;
    }



return 0;}
