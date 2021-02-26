#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c;
    char z;

    while(cin>>a>>b>>c){
        if(a==b&&a==c&&b==c){
            z='*';
        }else if(a!=b&&b==c){
            z='A';
        }else{
            if (a==c&&b!=a){
                z='B';
            }else{
                if(a==b&&c!=a){
                    z='C';
                }

            }


        }

	cout<<z<<endl;

    }



return 0;}

