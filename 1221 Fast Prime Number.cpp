#include <bits/stdc++.h>
using namespace std;

int main(){
    int i,j,n, x,s=0;


    cin >> n;

    for (i=0;i<n;i++){
        cin >> x;

        if(x==2){
            cout << "Prime" << endl;
        }else{
            if(x%2==0){
            cout << "Not Prime" << endl;
            }else{
                for (j=3; j<sqrt(x); j+= 2){
                    if(x%j==0)
                    s++;
                }

                if(s>0){
                    cout << "Not Prime" << endl;
                }else{
                    cout << "Prime" << endl;
                }
            }
        }

    s=0;
    }

return 0;}
