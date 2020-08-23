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
#define PI atan(1.0)*4
#define MOD 1000000007
#define INF (int)1e9
#define MEM(a, b) memset(a, (b), sizeof(a))
#define fast_io   ios_base::sync_with_stdio(false);cin.tie(0),cout.tie(0);

int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        long double af, de;
        cin>>af>>de;
        long double theta=atan(((de)/af));
        long double rad=sqrt(((af*af)+((de)*(de))));
        long double sec=((rad*rad)*(theta*2))/2;
        long double kite=(rad*tan(theta)*rad);
        long double ans=kite-sec;
        //cout<<theta<<" "<<r<<" "<<height<<" "<<height*r<<" "<<r*r*theta<<endl;
        cout<<fixed<<setprecision(7)<<ans<<endl;
    }
}

