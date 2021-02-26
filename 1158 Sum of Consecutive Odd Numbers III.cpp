#include <bits/stdc++.h>
using namespace std;


int main(){
    int n,x,y,i,j,c,d,e;
    cin>>n;
    for(i=1; i<=n; i++){
        cin>>x>>y;
        if(x%2==1){
            c=0;
            for(j=1;j<=y;j++){
                c+=x;
                x+=2;
            }
            cout<<c<<endl;
        }else{
            x++;
            c=0;
            for(j=1;j<=y;j++){
                c+=x;
                x+=2;
            }
            cout<<c<<endl;
        }
    }
return 0;}
