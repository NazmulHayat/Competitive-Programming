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
    int t=4,a[4];
    for(int i=0;i<t;i++){
        cin>>a[i];
    }
    sort(a,a+4);
    if(a[0]+a[3]==a[1]+a[2] || a[0]+a[1]+a[2]==a[3]){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}

int main(){
    fast_io;
    ll t;
    solve();
}

