#include <bits/stdc++.h>
using namespace std;

int a[10005];

int main(){
    int n,i,x;

    cin>>n;

    while(n!=0){
        x = 0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }

        for(i=0;i<n;i++){
            if(a[i]< a[(i+1)%n]){
                if(a[(i+1)%n]>a[(i+2)%n]){
                    x++;
                }

            }

            if(a[i]>a[(i+1)%n]){
                if(a[(i+1)%n]<a[(i+2)%n]){
                    x++;
                }

            }
        }
        cout<<x<<endl;
        cin>>n;

    }

return 0;}
