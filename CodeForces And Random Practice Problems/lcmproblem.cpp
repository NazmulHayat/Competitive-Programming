#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define AS(arr) sizeof(arr)/sizeof(arr[0])
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
const ll mod = 1000000000;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r;
        cin>>l>>r;
        ll t1 = r, mul = l*2, t2 = l%2==0 ? l : l+1;
        bool flag = 0;
        if(l==1) cout<<1<<" "<<r<<endl;
        else if(mul <= r) cout<<l<<" "<<mul<<endl;
        else{
            cout<<-1<<" "<<-1<<endl;
        }
    }
}
