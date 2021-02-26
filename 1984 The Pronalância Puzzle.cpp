#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j,x;
    char a[25],temp;
    cin>>a;
    x=strlen(a);
    for(i=0,j=x-1;i<x/2;i++,j--){
        temp = a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    cout<<a<<endl;

return 0;}
