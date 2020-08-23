/*
    If they say
    Who cares if one more light goes out?
    In a sky of a million stars
    It flickers, flickers
    Who cares when someone's time runs out?
    If a moment is all we are
    We're quicker, quicker
    Who cares if one more light goes out?
    Well I do
*/

#include<bits/stdc++.h>
using namespace std;

//binary_search(startaddress, endaddress, valuetofind)

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a) / gcd(a,b)) * (b)
#define all(x)  x.begin(),x.end()

#define ll long long
#define ull unsigned long long
#define VI vector<int>
#define VLL vector<ll>
#define VS vector<string>
#define MPII map<int, int>
#define SET set<int>
#define pb push_back
#define mp make_pair
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF (int)1e9
#define MEM(a, b) memset(a, (b), sizeof(a))
#define fast_io   ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);

int BS(int arr[], int l, int r, int t)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
        if (arr[m] == t) return m;
        if (arr[m] < t) l = m + 1;
        else r = m - 1;
    }
    return -1;
}

void solve(){
   ll k;
   cin>>k;
   ll j, sum = 0;
   if(k>=4){
      sum+=2;
   }
   for(int n=6;n<=k;n++){
       if(n % 2 == 0){
          sum += 2;
          n = n/2;
       }
       while(n % 2 == 0){
          n = n/2;
       }
       for(j = 3; j <= sqrt(n); j=j+2){
          if(n % j == 0){
             cout<<j<<endl;
             sum += j;
             n = n/j;
          }
          while(n % j == 0){
             n = n/j;
          }
       }
       if(n < 2){
          sum += n%MOD;
       }
    }
   cout<<sum<<endl;
}

int main(){
    fast_io;
    ll t;
    cin>>t;
    ll k=1;
    while(t--){
        cout<<"Case "<<k<<": ";
        solve();
    }
}


