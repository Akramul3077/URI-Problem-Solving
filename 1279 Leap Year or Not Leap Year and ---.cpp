#include<bits/stdc++.h>
#define N 1000001
using namespace std;

int split(char ara[],int len,int year){
    int long long n=0;

    for(int i=0;i<len;i++){
        n=( n*10+ (ara[i]-'0') )%year;
    }
    if(n==0)
        return 0;
    else
        return 1;
}


int main(){
    char year[N]={0};
    int unsigned  long long len, n=0;
    int l,f,line;

    line=0;

    while(scanf("%s",year)==1){
        n=0;
       len=strlen(year);

       if(line==1)
        cout<<endl;

        line=1;
        f=0;
        l=0;

         if( split(year,len,4)==0 && split(year,len,100) !=0 || split(year,len,400)==0 ){
             cout<<"This is leap year."<<endl;
             f=1;
             l=1;
         }
         if(split(year,len,15)==0){
           cout<<"This is huluculu festival year."<<endl;
            f=1;
         }
        if(split(year,len,55)==0 && l==1){
            cout<<"This is bulukulu festival year."<<endl;
        }
        if(f==0)
           cout<<"This is an ordinary year."<<endl;

        memset(year,'0',len+1);
    }

return 0;}
