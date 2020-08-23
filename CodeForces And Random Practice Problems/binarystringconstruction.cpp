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
    int tc;
    cin>>tc;
    for(int j = 1 ; j <= tc ; j++){
        int a,b,c;
        string s="";
        cin>>a>>b>>c;
        if(a!=0 || b!=0) a+=1;
        while(a--){
            s+="0";
        }
        if(c!=0) {
            b--,c++;
        }
        for(int i = 0 ; i < c ; i++) s+="1";
        if(b >= 1 && c!=0) {
            s+="0";
            if(c!=0) b--;
        }
        bool flag=1;
        for(int i = 0 ; i < b ; i++){
            if(flag){
                s+="1", flag=0;
            }
            else{
                s+="0", flag=1;
            }
        }
        cout<<s<<endl;
    }
}
