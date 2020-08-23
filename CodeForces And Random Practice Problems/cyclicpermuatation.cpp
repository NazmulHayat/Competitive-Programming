#include<bits/stdc++.h>
using namespace std;

#define ll long long
const ll mod = 1e9+7;

int main(){
    ll n;
    cin>>n;
    ll mul=1, fact=1;
    for(ll i = 1; i <= n-1 ; i++){
        mul *= 2;
        fact *= i;
        fact %= mod;
        mul %= mod;
    }
    fact*=n;
    fact%=mod;
    fact-=mul;
    fact%=mod;
//    if(fact < 0) fact += mod;
    cout<<fact<<endl;
}
