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
        int n;
        cin>>n;
        int arr[n+1];
        arr[0] = 0;
        int c1=0,c2=0;
        bool ok=1;
        for(int i = 1 ; i <= n ; i++)
        {
            cin>>arr[i];
        }
        int cnt=0;
        for(int i = 1 ; i <= n ; i++)
            {
               if(ok)
                {
                    cout<<abs(arr[i])<<" " ;
                    ok=0;
                }
               else if(!ok){
                    cout<<-abs(arr[i])<<" " ;
                    ok=1;
               }
            }
            cout<<endl;
    }
}

