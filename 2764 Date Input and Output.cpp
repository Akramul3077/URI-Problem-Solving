#include<bits/stdc++.h>
using namespace std;

int main() {
	int DD,MM,YY;

	scanf("%d/%d/%d",&DD,&MM,&YY);

	if(MM<10){
        cout<<0;
	}
	cout<<MM<<"/";
	if(DD<10){
        cout<<0;
	}
	cout<<DD<<"/";
	if(YY<10){
        cout<<0;
	}
	cout<<YY<<endl;

	if(YY<10){
        cout<<0;
	}
	cout<<YY<<"/";
	if(MM<10){
        cout<<0;
	}
	cout<<MM<<"/";
	if(DD<10){
        cout<<0;
	}
	cout<<DD<<endl;

	if(DD<10){
        cout<<0;
	}
	cout<<DD<<"-";
	if(MM<10){
        cout<<0;
	}
	cout<<MM<<"-";
	if(YY<10){
        cout<<0;
	}
	cout<<YY<<endl;
return 0;}
