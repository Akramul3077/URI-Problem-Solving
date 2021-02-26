#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n, c;
    int a, b;
    double ac, bc;
    cin>>n;
    for(i=1;i<=n;i++){
        c = 0;
        cin>>a>>b>>ac>>bc;
        while(a<=b){
            a*=((ac/100.0)+1.0);
            b*=((bc/100.0)+1.0);
            c++;
            if(c>100){
                cout<<"Mais de 1 seculo."<<endl;
                break;
            }
        }
        if (c<=100){
            cout<<c<<" anos."<<endl;
        }

    }

return 0;}
