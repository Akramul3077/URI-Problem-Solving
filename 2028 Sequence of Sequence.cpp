#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i, j, c=0;
    while(scanf("%d", &n) != EOF){
        int num = 1;
        c++;
        num+=((n*(n+1))/2);

        if(n==0){
            cout<<"Caso "<<c<<": "<<num<<" numero"<<endl;
        }else{
            cout<<"Caso "<<c<<": "<<num<<" numero"<<endl;
        }
        cout<<"0";
        for(i=1; i<=n; i++){
            for(j=1; j<=i; j++){
                cout<<" "<<i;
            }
        }
        cout<<endl<<endl;
    }
return 0;}

#include <stdio.h>
int main(){
    int n, i, j, cnt=0;
    while(scanf("%d", &n) != EOF){
        int num = 1;
        cnt++;
        num += ((n*(n + 1)) / 2);
        if(n == 0){
            printf("Caso %d: %d numero\n", cnt, num);
        }else{
            printf("Caso %d: %d numeros\n", cnt, num);
        }
        printf("0");
        for(i=1; i<=n; i++){
            for(j=1; j<=i; j++)
                printf(" %d", i);
        }
        printf("\n\n");
    }
return 0;}
