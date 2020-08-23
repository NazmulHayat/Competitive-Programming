#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        ll w[n];
        ll v[n];
        for(int i = 0 ; i < n ; i++){
            cin>>w[i];
        }
        for(int i = 0 ; i < n ; i++){
            cin>>v[i];
        }
        ll dp[n][m+1] = {0};
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j <= m ; j++){
                dp[i][j] = 0;
                if(i == 0 && j >= w[i])
                    dp[i][j] = v[i];
            }
        }
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j <= m ; j++){
                if(i-1>=0){
                   dp[i][j] = max(dp[i-1][j], dp[i-1][j-w[i]] + v[i]);
                   if(j < w[i]){
                      dp[i][j] = dp[i-1][j];
                   }
                }
            }
        }
        ll i=n-1, j = m;
        vector<ll> moves;
        while(i != 0){
            if(dp[i][j] != dp[i-1][j]){
                moves.pb(i);
                j=j-w[i];
            }
            i--;
        }
        cout<<"Item used with weight: ";
        for(auto &i : moves) cout<<w[i]<<" ";
        cout<<endl;
        cout<<"Maximum Sum possible: "<<dp[n-1][m]<<endl;
    }
}
//3
//4 5
//5 3 4 2
//60 50 70 30
//solved
