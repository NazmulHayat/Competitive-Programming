#include<bits/stdc++.h>
using namespace std;
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

unsigned long long power(unsigned long long x,unsigned long long y)
{
    if(y==0)
        return 1;
    return x*power(x,y-1);
}
int main()
{
    fast;
    unsigned long long t,a,b,c;
    cin>>t;
    while(t--)
    {
        cin>>a>>b>>c;
        unsigned long long anw=log2(b)/log2(c),total=power(c,anw),t1;
        t1=(b/total) * total;
        while(t1<a)
        {
            total/=c;
            anw--;
            t1=(b/total) * total;
        }
        cout<<anw<<endl;
    }
}
