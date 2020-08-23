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
    for(int i = 1 ; i <= tc ; i++){
        int n;
        cin>>n;
        ll a[n], b[n];
        ll sa=INT_MAX, sb=INT_MAX, posa = 0, posb=0;
        for(int i = 0 ; i < n ; i++){
            cin>>a[i];
            if(a[i] <= sa)
            {
                sa = a[i];
                posa=i;
            }

        }
        for(int i = 0 ; i < n ; i++){
            cin>>b[i];
            if(b[i] <= sb)
            {
                sb = b[i];
                posb=i;
            }
        }
        ll c1=0,c2=0,c3,c4,c5, tot=0;
        for(int i = 0 ; i < n ; i++){
                c1 = abs(sa-a[i]);
                c2 = abs(sb-b[i]);
                tot += max(c1,c2);
        }
        cout<<tot<<endl;
    }
}
