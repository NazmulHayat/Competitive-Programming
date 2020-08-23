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

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define ROF(i,a,b) for(int i=b-1;i>=a;i--)

void solve(){
    int n,a,b,c,i,j;
    cin>>n;
    int arr[n];
    FOR(i,0,n){
        cin>>arr[i];
    }

    a=0,b=1,c=n-1;
    if(arr[a] + arr[b] <= arr[c]){
        cout<<a+1<<" " <<b+1<<" "<<c+1<<endl;
    }
    else cout<<-1<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

