#include<bits/stdc++.h>
using namespace std;

int main(){
    int even=0,odd=0,n,i,po=0,ne=0;
    for(i=0;i<5;i++){
        cin>>n;
        if(n%2==0){
            even++;
        }else{
            odd++;
        }
        if(n>0){
            po++;
        }else{

            if(n!=0){
                ne++;
            }
        }

    }
    cout<<even<<" valor(es) par(es)"<<endl;
    cout<<odd<<" valor(es) impar(es)"<<endl;
    cout<<po<<" valor(es) positivo(s)"<<endl;
    cout<<ne<<" valor(es) negativo(s)"<<endl;

return 0;}


