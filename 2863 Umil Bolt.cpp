#include<bits/stdc++.h>
using namespace std;


int main(){
	int t;
	double n;
	while(cin>>t){
		double less=12.00;
		while(t--){
			cin>>n;
			if(n<less)less=n;
		}
		printf("%.2lf\n",less);
	}
return 0;}
