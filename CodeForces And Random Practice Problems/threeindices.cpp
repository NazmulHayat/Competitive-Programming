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
    int t, a, i, j, arr[1001];
    cin>>a;
    FOR(i, 0, a) cin>>arr[i];
    bool flag1=0,flag2=0;
    FOR(i, 0, a){
        int b,c,d;
        FOR(j, 0, a){
            if(i>=j) continue;
            if(!flag1 && arr[i] < arr[j]) flag1=1, b=i, c=j;
            else if(!flag2 && flag1 && arr[c] >  arr[j]) flag2=1, d=j;
            if(flag1 && flag2) break;
        }
        if(flag1 && flag2) {cout<<"YES\n"<<++b<<" "<<++c<<" "<<++d<<endl;flag1=1;break;}
        else flag1=0, flag2=0;
    }
    if(!flag1) cout<<"NO"<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

