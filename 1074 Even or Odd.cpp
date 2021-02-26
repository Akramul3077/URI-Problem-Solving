#include<bits/stdc++.h>
using namespace std;


int main(){
    int i,n,x;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>x;
        if(x==0){
            cout<<"NULL"<<endl;
        }else if(x%2==0){
            if(x>0){
                cout<<"EVEN POSITIVE"<<endl;
            }else{
                cout<<"EVEN NEGATIVE"<<endl;
            }

        }else{
            if(x>0){
                cout<<"ODD POSITIVE"<<endl;
            }else{
                cout<<"ODD NEGATIVE"<<endl;
            }
        }

    }



return 0;}
