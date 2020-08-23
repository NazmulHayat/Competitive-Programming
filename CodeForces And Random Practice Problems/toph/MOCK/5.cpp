#include<bits/stdc++.h>
using namespace std;

#define ll long long
const unsigned int MOD = 1000000007;
#define fast ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(0)

int pw(ll x, ll n)
{
    ll result = 1;
    while (n) {
        if (n & 1)
            result = result * x % MOD;
        n = n / 2;
        x = x * x % MOD;
    }
    return result;
}
ll ps(string a, string b)
{
    ll x = 0, y = 0;
    for (int i = 0; i < a.length(); i++)
        x = (x * 10 + (a[i] - '0')) % MOD;
    for (int i = 0; i < b.length(); i++)
        y = (y * 10 + (b[i] - '0')) % (MOD - 1);
    return pw(x, y);
}

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll s = sqrt(n) + 1;
        ll res = 0;
        res += 1;
        if(n != 1) res += pw(n,k);
        for(ll i = 2 ; i < n ; i++)
        {
            if(n%i==0)
                {
                    res += pw(i,k);
                }
        }
        cout<<res % MOD<<endl;
    }
}
