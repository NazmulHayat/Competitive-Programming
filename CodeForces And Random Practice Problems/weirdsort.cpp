#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back

const ll N = 100;
vector<ll> v[N];

//unsolved..........ekbar check korle hbe nah shudu

void solve(){
    int n, m, move;
    cin>>n>>m;
    ll arr[n], tmp[n], moves[m];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
        tmp[i] = arr[i];
    }
    for(int j = 0 ; j < m ; j++){
        cin>>moves[j];
        moves[j]--;
        if(tmp[moves[j]] > tmp[moves[j]+1]){
            swap(tmp[moves[j]], tmp[moves[j]+1]);
        }
    }
    for(int j = 0 ; j < m ; j++){
        if(tmp[moves[j]] > tmp[moves[j]+1]){
            swap(tmp[moves[j]], tmp[moves[j]+1]);
        }
    }
    sort(arr, arr+n);
    int i;
    for(i = 0 ; i < n ; i++){
        if(arr[i] != tmp[i]) break;
    }
    if(i == n) cout<<"YES\n";
    else cout<<"NO\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}
