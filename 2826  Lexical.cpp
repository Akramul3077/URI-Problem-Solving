#include<bits/stdc++.h>
using namespace std;

int main(){
    string A,B;
    cin>>A>>B;

    if(A.compare(B)==0){
        cout<<A<<endl;
        cout<<B<<endl;
    }else if(A.compare(B)<0){
        cout<<A<<endl;
        cout<<B<<endl;
    }else if(A.compare(B)>0){
        cout<<B<<endl;
        cout<<A<<endl;
    }

return 0;}
