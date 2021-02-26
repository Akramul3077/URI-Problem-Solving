#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,a = 1;
    cin>>n;
    int arr[n];
    for(i=0; i<n; i++){
      cin>>arr[i];
    }

    if(n==2&&arr[0]==arr[1]){
       a = 0;
    }else{
        for(i=2;i<n;i++){
            if(arr[i]>=arr[i-1]&&arr[i-1]>=arr[i-2]){
                a = 0;
                break;
            }else if(arr[i]<=arr[i-1]&&arr[i-1]<=arr[i-2]){
                a = 0;
                break;
            }
        }
    }
    if(a==1){
        cout<<"1"<<endl;
    }else{
        cout<<"0"<<endl;
    }
return 0;}
