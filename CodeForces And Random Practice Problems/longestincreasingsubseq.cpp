#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

int ci(vector<ll>& v, ll l, ll r, ll key)
{
    while (r - l > 1) {
        int m = l + (r - l) / 2;
        if (v[m] >= key) r = m;
        else l = m;
    }
    return r;
}
int ls(vector<ll>& v)
{
    if (v.size() == 0)
        return 0;
    vector<ll> dp(v.size(), 0);
    int length = 1;
    dp[0] = v[0];
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i] < dp[0])
            dp[0] = v[i];
        else if (v[i] >= dp[length - 1])
            dp[length++] = v[i];
        else
            dp[ci(dp, -1, length - 1, v[i])] = v[i];
    }
    return length;
}

int main()
{
    ll n,t;
    cin>>n>>t;
    ll arr[n], dp[n];
    string s;
    cin>>s;
    vector<ll> v;
    for(ll i = 0 ; i < n ; i++)
    {
        v.pb(s[i]-'0');
    }
    ll mx = ls(v);
    while(t--)
    {
        cin>>s;
        if(s=="toggle")
        {
            ll l,r;
            cin>>l>>r;
            for(int i = l-1 ; i < r ; i++)
                {(v[i] == 0) ? v[i] = 1 : v[i] = 0;}
            mx=ls(v);
        }
        else cout<<mx<<endl;
    }
}
