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
    int arr[n], a[n];
    int l1=INT_MAX,l2=INT_MAX, flag=1;
    cin>>arr[0]>>a[0];
    if(a[0]>arr[0])flag=0;
    for(int i = 1 ; i < n ; i++){
        cin>>arr[i]>>a[i];
        if(a[i]-a[i-1]>arr[i]-arr[i-1])flag=0;
        if(flag && a[i] >= a[i-1] && arr[i] >= arr[i-1]){
            flag=1;
            if(a[i]-a[i-1]>0 && arr[i] == arr[i-1])flag=0;
            else flag=1;
        }
        else{
            flag=0;
        }
        //cout<<flag<<endl;
    }
    if(flag)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}

int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

