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
    int a,b,sm=0;
    cin>>a>>b;
    if(a==b){cout<<0<<endl;return;}
    int d=abs(a-b);
    int i=1;
    bool flag=1;
    // 1 2 3 4 = 11 + 6
    // 1 2 3 4 5 = 15
    //2  10 = 8
    //3  11 = 8
    // 1 3
    // 5 5
    int c=0;
    d=abs(a-b);
    while(d!=0){
        if(d>=i){
            d-=i;
            i++;c++;
        }
        else{d+=2;}
    }
    cout<<c<<endl;
    //
}

int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

