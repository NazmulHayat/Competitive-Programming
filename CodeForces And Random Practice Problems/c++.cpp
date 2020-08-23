#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    if(b<a) {
        swap(a,b);
    }
    bool ok=1;
    int cnt=0;
    while(b<=c)
    {
        b+=a;
        swap(a,b);
        cnt++;
    }
    cout<<cnt-1<<endl;
}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        solve();
    }
    cerr<< '\n' << "Time elapsed :" << clock() * 1000.0 / CLOCKS_PER_SEC << " ms\n" ;
}
