#include<bits/stdc++.h>
using namespace std;

#define vll vector<ll>
#define pb push_back


typedef long long ll;


void solve(ll arr[], ll n, ll t){
    vll dp(t+1, t+1);
    dp[0] = 0;
    for(int i = 0 ; i <= t ; i++){
        for(int j = 0 ; j < n; j++){
            if(i >= arr[j]){
                dp[i] = min(dp[i], dp[i-arr[j]]+1);
            }
        }
    }
    cout<<dp[t];
}

int main(){
    int n,t;
    cin>>n>>t;
    ll arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    solve(arr, n, t);
}
