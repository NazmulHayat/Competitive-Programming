#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

int f(int b,int a)
{
    if(b==0)
        return 1;
    if(b==1)
        return a%MOD;
    if(b%2==1)
        return (f(b-1)*a)%MOD;
    else
        {
            int x = f(a/2);
            return (x*x)%MOD;
        }
}

int main()
{
    int n,t;
    cin>>n>>t;
    cout<<f(n,t)<<endl;
}
