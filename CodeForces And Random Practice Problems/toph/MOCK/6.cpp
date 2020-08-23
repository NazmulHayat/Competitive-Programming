#include <bits/stdc++.h>
using namespace std;
#define ll long long
void primenumber(ll n, ll s[]){
   vector <bool> primenum(n+1, 0);
   for (ll k=2; k<=n; k+=2)
      s[k] = 2;

   for (ll i=3; i<=n; i+=2){
      if (primenum[i] == 0){
         s[i] = i;
         for (ll j=i; j*i<=n; j+=2){
            if (primenum[i*j] == 0){
               primenum[i*j] = 1;
               s[i*j] = i;
            }
         }
      }
   }
}
int cpf(ll n) {
   ll s[n+1];
   primenumber(n, s);
   for(int i = 0 ; i < n ; i++)
    cout<<s[i]<<" ";
   ll res=1;
   ll pr = s[n];
   cout<<pr<<endl;
   ll pw = 1;
   while (n > 1){
      n = n / s[n];
      if (pr == s[n]){
         pw++;
         continue;
      }
      res *= (pw+1);
      pr = s[n];
      pw = 1;
   }
   return res;
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        n*=2;
        ll c = cpf(n);
        if(c % 2 == 0)
            cout<<c/2<<endl;
        else
            cout<<c/2 + 1<<endl;
    }
}
