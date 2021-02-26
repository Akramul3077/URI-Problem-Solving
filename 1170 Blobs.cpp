#include<bits/stdc++.h>
using namespace std;

int main(){
    double a;
    int n,dias;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        dias=0;
        while(a>1){
            a=a/2;
            dias++;
        }
        cout<<dias<<" dias"<<endl;

    }

return 0;}
