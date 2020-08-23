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
#define ld long double
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



set<ld> s;
vector<pair<ld, ld>> v;
vector<ld> d;

//bool cmp(ld &a, ld &b){
//    if(a<b) {
//
//    }
//}

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm(ll a, ll b){
    return (a/gcd(a,b)) * b;
}

void solve(){

}

int main(){
    fast_io;
    ll t;
    cin>>t;
    ll a,b;
    cin>>a>>b;
    VLL aa;
    VLL bb;
    aa.pb(a), bb.pb(b);
    ll z=t, ans=b;
    t--;
    while(t--){
        cin>>a>>b;
        ans = lcm(ans, b);
        aa.pb(a), bb.pb(b);
    }
    VLL act;
    for(ll i =0 ; i < z ; i++){
        act.pb((ans/bb[i])*aa[i]);
    }
        for(ll j = 0 ; j < z ; j++){
            if(act[i]/(ans/bb[i]) == aa[j]){
                cout<<aa[j]<<" "<<bb[j]<<endl;
                break;
            }
        }
    }
}
//5
//1 1000000000000000000000
//1 999999999999999999999
//1 999999999999999999998
//1 999999999999999999997
//1 999999999999999999996
