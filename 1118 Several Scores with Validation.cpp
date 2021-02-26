#include <bits/stdc++.h>
using namespace std;

int main(){
    double a,b,c,d,e,f,g,h=1,x=1,y=1,z=1;
    for(h=1;;h=1,x=1,y=1,z=1){
        cin>>a;
        if(a<0 || a>10){
            cout<<"nota invalida"<<endl;
            continue;
        }
        while(x==1){
            cin>>b;
            if(b<0 || b>10){
                cout<<"nota invalida"<<endl;
                continue;
            }
            x+=2;
        }
        c=(a+b)/2.0;
        cout<<fixed<<setprecision(2)<<"media = "<<c<<endl;
        cout<<"novo calculo (1-sim 2-nao)"<<endl;
        while(y==1){
            cin>>g;
            if(g<1 || g>2){
                cout<<"novo calculo (1-sim 2-nao)"<<endl;
                continue;
            }
            y+=2;
        }
        if(g==2)
            break;
    }
return 0;}
