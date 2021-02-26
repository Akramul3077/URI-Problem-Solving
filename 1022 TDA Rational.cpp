#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
	if(a<0)
		a = -a;
	if(b<0)
		b = -b;
	if(a%b == 0)
		return b;
	else
		return mdc(b,a%b);
}


int main (){
	int N, n1, d1, n2, d2, num, den, div;
	char oper;

	cin>>N;

	do{
		scanf("%d / %d %c %d / %d", &n1, &d1, &oper, &n2, &d2);

		if(oper == '+'){
			num = (n1*d2 + n2*d1);
			den = (d1*d2);
		}else if(oper == '-'){
			num = (n1*d2 - n2*d1);
			den = (d1*d2);
		}else if(oper == '*'){
			num = (n1*n2);
			den = (d1*d2);
		}else if(oper == '/'){
			num = (n1*d2);
			den = (n2*d1);
		}

		div = mdc(num,den);

		cout<<num<<"/"<<den<<" = "<<num/div<<"/"<<den/div<<endl;

		N--;
	} while (N>0);
return 0;}
