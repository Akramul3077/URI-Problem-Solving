#include <bits/stdc++.h>
using namespace std;

int main(){
	string a, b, c, d;
	int ca;
	cin >> ca;

	while(ca--){
		int x, y;

		cin>>a>>b>>c>>d;
		cin>>x>>y;

		x+=y;

		if(x&1){
			if (b=="PAR"){
                cout<<c<<endl;
			}else{
                cout<<a<<endl;
			}
		}else{
			if(b=="PAR"){
                cout<<a<<endl;
			}else{
               cout<<c<<endl;
			}
		}
	}
return 0;}
