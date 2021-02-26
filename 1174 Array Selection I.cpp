#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    double A[100];

    for(i=0;i<100;i++){
        cin>>A[i];
        if(A[i]<=10){
            cout<<fixed;
            cout<<setprecision(1)<<"A["<<i<<"] = "<<A[i]<<endl;
        }
    }



return 0;}
