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
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%2==0)
            cout<<n/2<<endl;
        else
            cout<<(n/2) + 1<<endl;
    }
}

