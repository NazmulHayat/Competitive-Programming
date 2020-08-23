#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mx 32000
#define VI vector<int>

VI primes;

void sieve(){
    bool prime[mx];
    for (int i = 0; i < mx; ++i) prime[i] = true;
    for (int p=3; p*p<=mx; p+=2)
    {
        if (prime[p])
        {
            for (int i=p*p; i<=mx; i += p)
                prime[i] = false;
        }
    }
    primes.pb(2);
    for(int i=3;i<mx;i+=2){
        if(prime[i]) primes.pb(i);
    }
}

int seg_sieve(ll l, ll r){
    bool pp[r-l+1];
    for (int i = 0; i < r - l + 1; ++i) pp[i] = true;
    if(l == 1) pp[0] = false;
    for(ll i = 0 ; primes[i]*primes[i] <= r ; i++){
        ll cp = primes[i];
        ll b = (l/cp)*cp;
        if(b < l) b += cp;
        for(ll j=b; j<=r; j+=cp)
            pp[j-l] = false;
        if(b == cp) pp[b-l] = true;
    }
    for(int i = 0 ; i < (r-l+1) ; i++){
        if(pp[i])cout<<l+i<<endl;
    }
    puts("");
}

int main(){
    sieve();
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        seg_sieve(l,r);
    }
    return 0;
}
