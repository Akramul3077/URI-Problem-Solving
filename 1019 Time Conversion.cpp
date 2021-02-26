#include<bits/stdc++.h>
using namespace std;


int main(){
    int N,H,M,S,SE;
    cin>>N;
    H=N/(60*60);
    SE=N%(60*60);
    M=SE/60;
    S=SE%60;

    cout<<H<<":"<<M<<":"<<S<<endl;


return 0;}
