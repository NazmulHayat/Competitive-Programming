#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

#define ll long long
#define vi vector<int>
#define vll vector<ll>

#define fr(i, a, b) for (int i=a; i<b; i++)
#define frd(i, a, b) for (int i=a-1; i>=b; i--)
#define fr(i, a) for (int i=0; i<a; i++)
#define pb(a) push_back(a)
#define ull  unsigned long long
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  ((a)*((b)/gcd(a,b)))

const int MOD = 1000000007;

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n;
        int v[n];
        for(int i = 0 ; i < n ; i++)
            {
                cin>>v[i];
            }
        bool flag = v[0] < v[n-1] ? 1 : 0;
        if(flag) cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}

