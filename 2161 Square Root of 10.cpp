#include <bits/stdc++.h>
using namespace std;

double f(int n){
	if (n<0){
        return 0.0;
	}

	if (n==0){
        return 1 / 6.0;
	}

	return 1/(6+f(n-1));
}
int main(){
	int n;
    double ans;
	cin>>n;
	ans =3.0+f(n-1);
    cout<<fixed<<setprecision(10)<<ans<<endl;

return 0;}

