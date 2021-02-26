#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N, a,b,c=1,d=4;
    cin>>N;
    for(a=1;a<=N;a++)
    {
        for(b=c;b<=d;b++)
        {
            if(b%4==0)
               cout<<"PUM"<<endl;
            else
                cout<<b<<" ";
        }
        c+=4; d+=4;
    }
    return 0;
}
