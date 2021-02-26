#include<bits/stdc++.h>
using namespace std;

int main() {
	string str;
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		if(str[i]>='0'&&str[i]<='9'){
            cout<<str[i];
        }else{
            cout<<endl;
        }
	}
	cout<<endl;
return 0;}
