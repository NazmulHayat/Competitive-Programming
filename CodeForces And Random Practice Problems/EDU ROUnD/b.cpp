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
    string s;
    cin>>s;
    int a=0,b=0,c=0;
    VI v;
    s+='0';
    for(int i = 0 ; i < s.length()+1 ; i++){
        if(s[i]=='1'){
            a++;
        }
        else{
            v.pb(a);
            a=0;
        }
    }
    sort(v.begin(), v.end());
    for(int i = v.size()-1 ; i >= 0 ; i--){
        if(c==0) b+=v[i],c=1;
        else c=0;
    }
    cout<<b<<endl;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

