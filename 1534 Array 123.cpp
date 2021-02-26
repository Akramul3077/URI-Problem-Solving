#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int arr[n][n];
        int a,b,c,d,e,f,g,h;
        for(a=0; a<n; a++){
            for(b=0; b<n; b++){
                arr[a][b]=3;
            }
        }
        for(a=0; a<n; a++){
            arr[a][a]=1;
        }
        d=n-1;

        for(a=0,b=d; a<n;a++,b--){
           arr[a][b]=2;
        }

        for(a=0; a<n; a++){
            for(b=0; b<n; b++){
                cout<<arr[a][b];
            }

            cout<<endl;
        }
    }
return 0;}
