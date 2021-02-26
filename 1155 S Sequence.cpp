#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    double j=1.0,s=0;

    for(i=1;i<=100;i++){
        s+=(1/j);
        j++;
    }
    cout<<fixed;
    cout<<setprecision(2)<<s<<endl;


return 0;}

