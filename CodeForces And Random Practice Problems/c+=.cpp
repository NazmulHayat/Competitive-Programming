#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(b>a) {
        swap(a,b);
    }
    bool ok=1;
    int c=0;
    while(a!=c || b!=c)
    {
        if(ok) {
            a+=b;
            ok=0;
        }
        else{
            b+=a;
            ok=1;
        }
        c++;
    }
    cout<<c<<endl;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
}
