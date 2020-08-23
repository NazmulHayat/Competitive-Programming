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
    VLL v;
    ll x=0;
    ll arr[n];
    ll tmp=0;
    memset(arr, 0, sizeof(arr));
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[0] == arr[i])x++;;
    }
    if(x==n)cout<<n<<endl;
    else cout<<1<<endl;
//    for(auto &i:v)cout<<i<<" ";
//    cout<<endl;
//    ll l = 2*n;
//    int j=-1;
//    bool flag=0;
//    while(j!=0 && flag){
//        if(j < n) j++;
//        if(j >= n){
//            j--;flag=1;
//        }
//        cout<<j<<endl;
//        if(j<n){
//            if(v[j] == v[j+1]) continue;
//            if(v[j] + v[j+1] == v[j+2]){
//                continue;
//            }
//            else{
//                arr[j+1] = v[j]+v[j+1];
//                v[j+1] = arr[j+1];
//                cout<<"HI123"<<endl;
//            }
//        }
//        else{
//            if(v[j] == v[j-1]) continue;
//            if(v[j] + v[j-1] == v[j-2]){
//                continue;
//            }
//            else{
//                arr[j-1] = v[j]+v[j-1];
//                v[j-1] = arr[j-1];
//                cout<<"TOMAR" <<endl;
//            }
//        }
//    }
//    int c=0;
//    for(int i=0;i<n;i++){
//        cout<<arr[i]<<" ";
//        if(arr[i] == 0) c++;
//    }
//    cout<<n-c<<endl;
}

int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}
