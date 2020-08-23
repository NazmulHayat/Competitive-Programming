#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
int c[201], d[201];
unsigned int ans=0, mul = INT_MAX;
void solve(){
    unsigned int a,b,i,k;
    cin>>a>>b;
    FOR(i,0,a) cin>>c[i];
    for(i=0;i<b;i++){
        cin>>d[i];
        for(int j=0;j<a;j++){
            k=(c[j]&d[i]);
            if(k==0) continue;
            mul=min(mul, k);
            cout<<k<<"\n";
        }
        ans += mul;
    }
    cout<<ans<<endl;
}

int main(){
    solve();
}
