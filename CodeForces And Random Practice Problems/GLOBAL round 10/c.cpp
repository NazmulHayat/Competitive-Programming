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
    ull n;
    cin>>n;
    ull arr[n], k=0, tmp=0, gg=1,c=0,j=0;
    cin>>arr[0];
    k=arr[0];
    for(ll i = 1 ; i < n ; i ++){
        cin>>arr[i];
        if(arr[i] >= k){
            k = arr[i];
        }
        else if(arr[i-1] > arr[i]){
            c+=arr[i-1]-arr[i];
        }
    }
    cout<<c<<endl;
}

int main(){
    fast_io;
    ll t;
//    ll j=1000000000;
//    j+=j;
//    cout<<j<<endl;
    cin>>t;
    while(t--){
        solve();
    }
}

