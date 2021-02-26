#include<bits/stdc++.h>
using namespace std;

int main(){
    char w[10],w2[10],p1,p2,p3,p4;
    int d1,d2,x,y,z,x2,y2,z2,D,H,M,S,D2,H2,M2,S2,ANS,ANS1,ANS2,ANSD,ANSH,ANSM,ANSS;

    cin>>w>>d1;
    cin>>x>>p1>>y>>p2>>z;

    cin>>w2>>d2;
    cin>>x2>>p3>>y2>>p4>>z2;


    D=d1*86400;
    H=x*3600;
    M=y*60;
    S=z;
    ANS1=D+H+M+S;

    D2=d2*86400;
    H2=x2*3600;
    M2=y2*60;
    S2=z2;
    ANS2=D2+H2+M2+S2;

    ANS=ANS2-ANS1;

    ANSD=ANS/86400;
    ANS=ANS%86400;
    cout<<ANSD<<" dia(s)"<<endl;
    ANSH=ANS/3600;
    ANS=ANS%3600;
    cout<<ANSH<<" hora(s)"<<endl;
    ANSM=ANS/60;
    ANS=ANS%60;
    cout<<ANSM<<" minuto(s)"<<endl;
    ANSS=ANS;
    cout<<ANSS<<" segundo(s)"<<endl;

return 0;}
