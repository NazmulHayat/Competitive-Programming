#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,x, tmp=0;
        cin>>n>>x;
        for(ll i = 2 ; i <= sqrt(n) ; i++){
            if(n % i == 0){
                tmp = i; break;
            }
        }
        if(tmp == 0){
            tmp = n;
            n += tmp;
            n += (2*(x-1));
        }
        else{
            if(tmp % 2 != 0){
                n += tmp;
                n += (2*(x-1));
            }
            else{
                n += 2*(x);
            }
        }
        cout<<n<<endl;
    }
}
