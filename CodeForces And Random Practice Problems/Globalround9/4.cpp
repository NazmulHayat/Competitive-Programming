#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

#define ll long long
#define vi vector<int>
#define vll vector<ll>

#define fr(i, a, b) for (int i=a; i<b; i++)
#define frd(i, a, b) for (int i=a-1; i>=b; i--)

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
        int n;
        cin>>n;
        int arr[n], sub=0;
        bool flag=1;
        cin>>arr[0];
        sub = arr[0];
        for(int i = 1 ; i < n ; i++)
        {
            cin>>arr[i];
            if(sub > arr[i] && flag != 0)
                flag=0;
            sub = arr[i];
        }

        if(flag==1)
            cout<<0<<endl<<endl;
        else{
            cout<<n<<endl;
            for(int i = 1 ; i <= n ; i++)
                cout<<i<<" ";
            cout<<endl;
        }
    }
}
