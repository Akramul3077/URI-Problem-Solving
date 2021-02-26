#include<bits/stdc++.h>
using namespace std;

int  main(){
    int n,i,a,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a;
        for(j=2;j<=a-1;j++){
            if(a%j==0){
                cout<<a<<" nao eh primo"<<endl;
                break;
            }
        }
        if(j==a){
            cout<<a<<" eh primo"<<endl;
        }
    }

return 0;}
