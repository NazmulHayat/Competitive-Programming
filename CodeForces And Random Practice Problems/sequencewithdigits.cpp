#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll Add(ll n){
  ll m1 = 10,m2 = 0;
  while(n > 0){
    ll x = n%10;
    m1 = min(m1,x);
    m2 = max(m2,x);
    n /= 10;
  }
  return m1*m2;
}

int main()
{
  ll tc;
  cin>>tc;
  while(tc--){
    ll n,k;
    cin>>n>>k;
    k--;
    while(k--){
      ll y = Add(n);
      if(y == 0) break;
      n += y;
      cout<<n<<endl;
    }
    cout<<n<<endl;
  }
}
