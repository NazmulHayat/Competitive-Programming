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
    ll a,b;
    cin>>a>>b;
    ll arr1[a];
    ll arr[a];
    for(int i=0;i<a;i++){
        cin>>arr1[i];
        arr[i] = arr1[i];
    }
    ll mx = *max_element(arr1, arr1+a);
    ll mn = *min_element(arr1, arr1+a);
    ll d = mx-mn;
    for(int i=0;i<a;i++){
        arr[i] = mx-arr[i];
    }
    if(b!=1){
        d = *max_element(arr, arr+a);
        if(b%2==0){
            for(int i=0;i<a;i++){
                arr[i] = d-arr[i];
            }
        }
    }
    for(int i=0;i<a;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

