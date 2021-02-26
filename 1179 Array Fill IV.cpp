#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,i,c=0,d,e,f,g,h,j,k,l=0,m=0,x=0,n,p,par[5],impar[5],ara[15];

    for(i=0; i<15; i++){
        cin>>ara[i];
    }

    for(a=0; a<15; a++){
        if(l==5){
            for(n=0; n<5; n++)
                cout<<"impar["<<n<<"] = "<<impar[n]<<endl;
            l=0;
        }
        if(m==5){
            for(p=0; p<5; p++)
                cout<<"par["<<p<<"] = "<<par[p]<<endl;
            m=0;
        }

        if(ara[a]%2!=0){
            impar[c]=ara[a];
            ++c;
            l++;
            if(c==5) c=0;
        }
        if(ara[a]%2==0){
            par[x]=ara[a];
            ++x;
            m++;
            if(x==5) x=0;
        }
    }
    for(k=0; k<l; k++)
            cout<<"impar["<<k<<"] = "<<impar[k]<<endl;
    for(j=0; j<m; j++)
            cout<<"par["<<j<<"] = "<<par[j]<<endl;
    return 0;
}
