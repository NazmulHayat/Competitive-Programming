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

}

int main(){
    fast_io;
    ll t;
    cin>>t;
    int j=1;
    while(t--){
        ll n;
        cin>>n;
        ll f;
        map<ll, map<ll, ll>> m; //i
        set<ll> s;
        for(ll i = 0 ; i < n ; i++){
            cin>>f;
            // 5
            // m[5]++
            s.insert(f);
            for(auto &j : s){
                if(j==f)m[i][j] = m[i-1][j]+1;
                else m[i][j]=m[i-1][j];
            }
        }
//        for(int i=0;i<n;i++){
//            for(int j=1;j<=n;j++){
//                cout<<tmp[i][j]<<endl;
//            }
//        }
//        for(auto &i: m){
//            for(auto &j: i.second){
//                cout<<i.first<<" "<<j.first<<" "<< j.second<<endl;
//            }
//        }
        ll x;
        cin>>x;
        cout<<"Case "<<j<<":"<<endl;
        for(ll i = 0 ; i < x ; i++){
            ll a,b,c, d=0;
            cin>>a>>b>>c;
            for(auto &j:s){
                ll tm = abs(m[b-1][j]-m[a-1][j]);
                if(tm > 0){
                    d += abs(c-j)*tm;
                }
                else{
                    if(m[b-1][j] == m[a-1][j] && m[a-2][j]!= m[a-1][j])
                        d += abs(c-j)*m[a-1][j];
                }
                //cout<<" "<<d<<" "<<j<<" "<<m[a-1][j]<<" "<<m[b-1][j]<<" "<<endl;
            }
            cout<<d<<endl;
        }
        j++;
    }
}
//10
//5
//1 2 2 3 3
