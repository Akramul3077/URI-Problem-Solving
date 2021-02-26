#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
    double j=1.0,s=0;

    for(i=1;i<=39;i+=2){
        s+=(i/j);
        j=(j+j);
    }
    cout<<fixed;
    cout<<setprecision(2)<<s<<endl;


return 0;}


