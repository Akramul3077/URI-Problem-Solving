#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int M,N ,MS,NS,FS=0;

     while(scanf("%lld %lld", &M, &N) != EOF){
        MS = 1;
        NS = 1;
        for (int i = M; i > 0; --i){
            MS *= M;
            M--;
        }

        for (int i = N; i > 0; --i){
            NS *= N;
            N--;
        }

        cout<<MS+NS<<endl;

      }

return 0;}



