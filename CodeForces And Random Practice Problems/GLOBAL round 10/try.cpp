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

void solve(){
    int n;
    cin>>n;
    ll arr[n];
    int c=0,x=0,gg=1;
    cin>>arr[0];
    map<int, int> m;
    for(int i = 1 ; i < n ; i++){
        cin>>arr[i];
        if(arr[i]>=arr[i-1] && gg){
            x++;
        }
        else {
            gg=0;
            m[arr[i]]++;
        }
    }
    int mn = *min_element(arr+x, arr+n);
    ll hi = arr[x]-mn + m[mn]-1;
    if(hi==-1)cout<<0<<endl;
    else cout<<hi<<endl;
}

int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

