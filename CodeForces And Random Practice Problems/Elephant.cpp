#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=0;
    if(n%5<5)
        {
           c+=n/5;
           n -= (n/5)*5;
        }
    if(n%4<4)
        {
           c+=n/4;
           n -= (n/4)*4;
        }
    if(n%3<3)
        {
           c+=n/3;
           n -= (n/3)*3;
        }
    if(n%2<2)
        {
           c+=n/2;
           n -= (n/2)*2;
        }
    if(n>0)
        c+=n;
    cout<<c<<endl;

}
