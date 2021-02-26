#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		if(str[i]==','){
           cout<<endl;
        }else{
            cout<<str[i];
        }
	}
	cout<<endl;
return 0;}

