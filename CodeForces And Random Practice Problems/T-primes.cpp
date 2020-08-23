#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define lld long long double

bool sqr(ll a)
{
    double s = sqrt(a);
    return ((s-floor(s)) == 0);
}

bool prime(ll p){
    if(p==2 || p==3) return true;
    if(p%2==0 || p%3==0) return false;
    for(ll i = 5 ; i*i <= p ; i = i + 6){
        if(p%i == 0 || p%(i+2) == 0)
            return false;
    }
    return true;
}

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll a;
        cin>>a;
        if(sqr(a) && a!=1){
            ll p = sqrt(a);
            if(prime(p)){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}

