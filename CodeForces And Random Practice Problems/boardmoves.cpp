#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        float n;
        long long ans = 0;
        cin>>n;
        n = int(n/2);
        ans = ((n*n + n) * (2*n+1))*8;
        cout<<ans/6<<endl;
    }
}
