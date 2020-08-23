#include<bits/stdc++.h>
using namespace std;

#define ll long long

ll count(ll n){
    if (n <= 2)
        return -1;
    else {
        ll ans = (n - 1) * 1ll * (n - 2) / 2;
        return ans;
    }
}

bool ps(long double x)
{
  long double h = sqrt(x);
  return ((h - floor(h)) == 0);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a = sqrt(n);
        long double x = n*1.0;
        if(n<9){
            cout<<0<<endl;
        }
        else if(!ps(x)) cout<<0<<endl;
        else{
            ll ans = count(a);
            cout<<ans<<endl;
        }
    }
}



