#include<bits/stdc++.h>
using namespace std;

int main(){
    int Max=0,b=0,i, a[101];

    for(i=1;i<=100;i++){
        cin>>a[i];
        if(a[i]>Max){
            Max=a[i];
            b=i;
        }
    }
    cout<<Max<<endl<<b<<endl;

return 0;}
