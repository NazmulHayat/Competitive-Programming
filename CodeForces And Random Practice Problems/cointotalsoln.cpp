#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define vi vector<int>
#define pb push_back

int main(){
    int t,n;
    cin>>t>>n;
    int a;
    vll arr;
    //     c  r
    ll dp[n+1][t+1];
    for(ll i = 1 ; i <= n ; i++){
        cin>>a;
        arr.push_back(a);
    }
    dp[0][0] = 1;
    arr.pb(0);
    sort(arr.begin(), arr.end());

    for(ll i = 1 ; i <= t ; i++) dp[0][i] = 0;

    for(ll i = 0 ; i <= n; i++){
        dp[i][0] = 1;
        for(ll j = 1 ; j <= t  ; j++){
            if(dp[i][j] == 0 && i==0) break;
            if(j-arr[i] < 0){
                dp[i][j] = dp[i-1][j];
            }
            else
                {
                    dp[i][j] = dp[i-1][j] + dp[i][j-arr[i]];
                }
        }
    }
    cout<<dp[n][t];
}
