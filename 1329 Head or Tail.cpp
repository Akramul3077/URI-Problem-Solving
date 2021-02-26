#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,i,a,Mary=0,John=0;
    while(cin>>n){
        if(n==0){
            break;
        }
        for(i=0;i<n;i++){
            cin>>a;
            if(a==0){
                Mary++;
            }else if(a==1){
                John++;
            }
        }
        cout<<"Mary won "<<Mary<<" times and John won "<<John<<" times"<<endl;
        Mary=0;John=0;
    }



return 0;}
