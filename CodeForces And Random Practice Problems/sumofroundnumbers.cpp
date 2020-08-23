#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define mp make_pair
#define ii pair<int, int>

const long long mod = 1e9 + 7;
const long long INF = 1e9 + 7;

void solve(){

}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        int len = 1;
        int tmp = n;
        if (tmp > 0) {
            for (len = 0; tmp > 0; len++) {
                tmp /= 10;
            }
        }
        int i=n-1, j=0, mod=10;
        ll arr[5] = {10,100,1000,10000, 100000};
        vll v;
        while(len--){
            mod = arr[j];
            tmp = n%mod;
            if(tmp!=0){
                v.pb(tmp);
            }
            n -= tmp;
            j++;
        }
        cout<<v.size()<<endl;
        for(auto &i : v) cout<<i<<" ";
        cout<<endl;
    }
}
