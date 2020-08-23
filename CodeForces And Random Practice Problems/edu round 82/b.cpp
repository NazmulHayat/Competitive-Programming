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
    int n,tr;
    cin>>n>>tr;
    int arr[n], sm=0, sum[n], z=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    double avg=0;
    int ans=0, flag=0, init=0;
    for(int i = 0 ; i < n ; ++i){
        if(arr[i]<tr){
            sm+=arr[i];
        }
        else{
            if(!flag){flag=1, init=i;}
            sm+=arr[i];
            avg = sm/(i+1);
            if(avg > tr){ans=i+1; break;}
        }

        sum[i] = sm;
    }
//    if(ans==0){
//        for(int i=0;i<n;i++){
//
//        }
//    }
    cout<<ans<<endl;
}

int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

//unsolved

