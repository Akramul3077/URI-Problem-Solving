#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[5],i,j,d,temp,s1,s2;
    for(i=0;i<4;i++){
        cin>>a[i];
    }

    for(i=0;i<4;i++){
        for(j=i+1;j<4;j++){
            if(a[j]<a[i]){
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    s1=a[1]+a[2];
    s2=a[0]+a[1];
    if(a[3]<s1 || a[2]<s2){
        cout<<"S"<<endl;
    }else{
        cout<<"N"<<endl;
    }
    return 0;}

