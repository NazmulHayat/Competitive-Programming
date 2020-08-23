#include<bits/stdc++.h>
using namespace std;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll long long
int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ll n,x;
    cin>>n;
    vector<ll> v;
    v.resize(n);
    for(int i = 0 ; i < n ; i++)
    {
        cin>>x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for(auto& i: v)
        cout<<i<<" ";
}
