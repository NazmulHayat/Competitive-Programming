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
    int arr[n],x=0;
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        x+=arr[i];
    }
    int sm=0, a=0;
    for(int i=0;i<n-1;i++){
        cin>>a;
        sm+=a;
    }
    ll v1=x-sm;
    //cout<<v1<<endl;
    x=0;
    for(int i = 0 ; i < n-2 ; i++){
        cin>>a;
        x+=a;
    }
    ll v2=(sm-x);
    cout<<v1<<endl<<v2<<endl;
}

int main(){
    fast_io;
    ll t;
    solve();
}

