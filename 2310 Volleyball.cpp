#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,n,s,b,a,s1,b1,a1;
    char name[1000];
    double sum_s=0.00,sum_a=0.00,sum_b=0.00,sum_s1=0.00,sum_b1=0.00,sum_a1=0.00,ans1=0.00,ans2=0.00,ans3=0.00;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>name;
        cin>>s>>b>>a;
        cin>>s1>>b1>>a1;
        sum_s+=s;
        sum_a+=a;
        sum_b+=b;
        sum_s1+=s1;
        sum_a1+=a1;
        sum_b1+=b1;
    }
    ans1=(sum_s1/sum_s)*100.00;
    ans2=(sum_b1/sum_b)*100.00;
    ans3=(sum_a1/sum_a)*100.00;
    cout<<fixed;
    cout<<setprecision(2)<<"Pontos de Saque: "<< ans1<<" %."<<endl;
    cout<<setprecision(2)<<"Pontos de Bloqueio: "<< ans2<<" %."<<endl;
    cout<<setprecision(2)<<"Pontos de Ataque: "<< ans3<<" %."<<endl;


return 0;}
