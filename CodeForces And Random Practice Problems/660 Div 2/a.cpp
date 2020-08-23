#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define vi vector<int>
#define AS(arr) sizeof(arr)/sizeof(arr[0])

typedef long long ll;
const ll mx = 1000000000;

int prime(ll num){
    int cnt = 0;
    for (int i = 2; cnt < 2 && i * i <= num; ++i)
        while (num % i == 0)
            num /= i, ++cnt;
    if (num > 1)
        ++cnt;

    return cnt == 2;
}
int main(){
     int t;
    cin>>t;
    while(t--){
        int n,s=30;
        cin>>n;
        vi v = {6,10,14};
        if(n < 31){
            cout<<"NO"<<endl;
            continue;
        }
        if(n==36){
            v.erase(v.begin()+2);
            v.pb(15);
            s -= 14;
            s += 15;
        }
        if(n==40){
            v.erase(v.begin()+1);
            v.pb(15);
            s -= 10;
            s += 15;
        }
        if(n==44){
            v.erase(v.begin()+2);
            v.pb(21);
            s -= 14;
            s += 21;
        }
        cout<<"YES"<<endl;
        for(auto &i: v) cout<<i<<" ";
        cout<<n-s<<endl;

    }
}
