#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,sum=0;
	long long c;


	while (cin>>n>>c){
		sum=0;
		while(c){
			sum +=(c%10);
			c=c/10;
		}
		cout<<sum<<" ";
		if(sum%3==0){
            cout<<"sim"<<endl;
		}else{
            cout<<"nao"<<endl;
		}
	}
return 0;}
