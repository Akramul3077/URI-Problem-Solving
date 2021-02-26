#include<bits/stdc++.h>
using namespace std;


int main(){
    int L,C;
    cin>>L>>C;
    int sum=L*C;
    sum+=(L-1)*(C-1);
    cout<<sum<<"\n";
    sum=0;
    sum+=(L-1)*2;
    sum+=(C-1)*2;
    cout<<sum<<endl;
return 0;}
