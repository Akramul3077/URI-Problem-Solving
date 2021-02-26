#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,i,c,j=0,e=1;
    cin>>a;
    int arr[a];

    for(i=0; i<a; i++){
       cin>>arr[i];
    }
    c=arr[j];
    for(j=0; j<a; j++)
    {
        if(arr[j]<c){
            c=arr[j];
            e=j+1;
        }

    }
    cout<<e<<endl;
return 0;}
