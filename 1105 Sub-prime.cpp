#include <bits/stdc++.h>
using namespace std;

int main(){
    int i, b, n, x, d, c, v,ch=0,re[25];

    while(scanf("%i %i", &b, &n) && (b || n)){

        ch = 0;

        for(i=1;i<=b;i++){
            cin>>x;
            re[i]=x;
        }

        for(i=1;i<=n;i++){
            cin>>d>>c>>v;
            re[d] -= v;
            re[c] += v;
        }

        for(i=1;i<=b;i++){
            if(re[i]<0){
                ch =1;
                break;
            }
        }

        if(ch== 1){
            puts("N");
        }else{
            puts("S");
        }
    }

return 0;}
