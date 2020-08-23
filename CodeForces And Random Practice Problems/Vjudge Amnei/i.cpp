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
    int r,c;
    cin>>r>>c;
    int arr[r][c];
    int t1=0,t2=0;
    ll sm=0;
    bool flag1=1, flag2=1;
    for(int i = 0 ; i < r ; i++){
        for(int j = 0 ; j < c ; j++){
            cin>>arr[i][j];
        }
        t1=0;
    }
    t1=0,t2=0;
    for(int i=r-1;i>=0;i--){
        for(int j=c-1;j>=0;j--){
            if(arr[i][j] == 0){
                arr[i][j] = (arr[i][j+1] > arr[i+1][j]) ? arr[i+1][j]-1 : arr[i][j+1]-1;
            }
            sm += arr[i][j];
        }
        t1=0;
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if((j!=0 && arr[i][j]<=arr[i][j-1])||(i!=0 && arr[i][j]<=arr[i-1][j])){flag1=0;break;}
        }
        if(!flag1)break;
    }
    (flag1) ? cout<<sm : cout<<-1;
    cout<<endl;
}

int main(){
    fast_io;
    ll t;
    solve();
}

