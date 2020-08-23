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

bool cmp(const pair<ll, ll>& a,
         const pair<ll, ll>& b)
{
    return a.second > b.second;
}

//
//void solve(){
//    ll a,b;
//    cin>>a>>b;
//    ll x,y;
//    vector<pair<ll,ll>> v;
//    vector<pair<ll,ll>> tmpa;
//    set<ll> s;
//    ll arr[100005];
//    map<ll,ll>m;
//    for(ll i = 0 ; i < a ; i++){
//        cin>>x>>y;
//        v.pb(mp(x,y));
//    }
//    sort(v.begin(), v.end(), cmp);
//    ll cr=0,sm=0, chng=INF, tmp=0;
//    for(ll i=0;i<a;i++){
//            //cout<<v[i].first<<endl;
//        //cout<<v[i].first<<" "<<v[i].second<<endl;
//        if(v[i].second > sm && cr+v[i].first > b){
//            //cout<<i<<" hello\n";
//            cr=v[i].first;
//            sm=v[i].second;
//            tmpa.pb(mp(cr, sm));
//        }
//        else{
//            //cout<<"hi\n";
//            sm+=v[i].second;
//            cr+=v[i].first;
//            tmpa.pb(mp(cr, sm));
//        }
//    }
////    for(int i = 0 ; i < a ; i++){
////        cout<<tmpa[i].first<<" "<<tmpa[i].second<<endl;
////    }
//    for(int i = a-1 ; i >= 0 ; i--){
//        //cout<<tmpa[i].first<<endl;
//        if(tmpa[i].first <= b){
//            cout<<tmpa[i].second<<endl;
//            break;
//        }
//    }
//}


void solve(){
    ll a,b;
    cin>>a>>b;
    int c[a];
    map<ll,ll> m;
    vector<pair<ll,ll>> v;
    ll y=0,x, tmp=0;
    for(int i  = 0 ; i < a ; i++){
        cin>>x>>y;
        if(m[y] < x){
            m[y] = x;
            v.pb(mp(x,y));
        }
    }
    ll sm=0, curr=0;
    sort(v.begin(), v.end(), cmp);
    for(auto &i : v){
        //cout<<i.first<< " " <<i.second<<endl;
        if(i.first+sm <= b){
            sm+=i.first;
            curr+=i.second;
        }
    }
    cout<<curr<<endl;
}

int main(){
    fast_io;
    ll t;
    cin>>t;
    ll k=1;
    while(t--){
        cout<<"Case "<<k<<": ";
        solve();
        k++;
    }
}


