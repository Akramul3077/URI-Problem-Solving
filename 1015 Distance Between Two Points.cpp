#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main(){
    double x1,y1,x2,y2,Distance=0;

    cin>>x1>>y1;
    cin>>x2>>y2;

    Distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));

    cout<<fixed;
    cout<<setprecision(4)<<Distance<<endl;

return 0;}
