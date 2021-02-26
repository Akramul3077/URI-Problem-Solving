#include<bits/stdc++.h>
using namespace std;

int main(){
    int H1,M1,H2,M2,H=0,M=0;

    while(cin>>H1>>M1>>H2>>M2){
        if(H1==0&&H2==0&&M1==0&&M2==0){
            break;
        }
        int current =(H1*60)+M1;
        int alarm =(H2*60)+M2;

        if(alarm<current){
            alarm=alarm+(24*60);
        }
        cout<<alarm-current<<endl;

    }

return 0;}
