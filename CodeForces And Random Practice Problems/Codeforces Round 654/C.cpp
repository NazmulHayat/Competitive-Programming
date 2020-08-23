#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

#define ll long long
#define vi vector<int>
#define vll vector<ll>

#define fr(i, a, b) for (int i=a; i<b; i++)
#define frd(i, a, b) for (int i=a-1; i>=b; i--)
#define fr(i, a) for (int i=0; i<a; i++)

const int MOD = 1000000007;

int main()
{
    fast;
    ll i = 0 , t, v, c, a, b;
    cin>>t;
    while(t--)
    {
        cin>>v>>c>>a>>b;
        if(v == 0 && a == 0)
            cout<<"No"<<endl;
        else if(c == 0 && b == 0)
            cout<<"No"<<endl;
        else if(v-a >= 0 && c-b >= 0)
        {
            cout<<"Yes"<<endl;
            continue;
        }
        else
            cout<<"No"<<endl;
    }
}

