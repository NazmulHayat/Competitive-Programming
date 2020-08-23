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

int main(){
    fast_io;
    ll t;
    cin>>t;
    while(t--){
        string s,r;
        cin>>s>>r;
        if(s.length()>r.length()){
            cout<<"NO\n";
            continue;
        }
        map<char, int> m1;
        map<char, int> m2;
        set<char> ss;
        for(int i = 0 ; i < s.length() ; i++){
            m1[s[i]]++;
            m2[s[i]]++;
            ss.insert(s[i]);
        }
        bool flag=0;
        int j=0;
        //cout<<"hello\n";
        for(int k = 0 ; k < r.length() ; k++){
            for(int i = k ; i < r.length() ; i++){
                if(j==s.length())break;
                if(!m1[r[i]]){
                    j=0;flag=0;
                }
                else{
                    j++;
                    m1[r[i]]--;
                }
            }
            if(j==s.length())break;
            for(auto &l : m2){
                m1[l.first] = l.second;
                //cout<<m1[l.first]<<endl;
            }
            j=0;
        }
        //cout<<j<<endl;
        (j==s.length()) ? cout<<"YES\n" : cout<<"NO\n";
    }
}

