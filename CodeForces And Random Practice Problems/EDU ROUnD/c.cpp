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

#define FOR(i,a,b) for(int i=a;i<=b;i++)
#define ROF(i,a,b) for(int i=b-1;i>=a;i--)

void solve(){
    int a;
    cin>>a;
    string s,tmp="";
    cin>>s;
    map<int, int> m;
    ll sum[s.length()+1], sm=0;
    sum[0]=0;
    for(int i =  0 ; i < s.length() ; i++){
        tmp+=s[i];
        if(s[i]=='0' || s[i]=='1')continue;
        for(int j=0;j<s[i]-'0';j++)tmp+='0';
    }
    int i=0,j=s.length()-1,c=0;
    bool flag=0;
    for(i=0;i<s.length();i++){
        if(s[i]==tmp[i]){
            for(int k=1;k<=s[i]-'0';k++){
                if(s[i+k] == tmp[i+k])flag=1;
                else {flag=0;break;}
            }
        }
        if(flag){c++;}
        flag=0;
    }
    cout<<tmp<<endl;
    cout<<c<<endl;
}

int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}

//not solved yet
