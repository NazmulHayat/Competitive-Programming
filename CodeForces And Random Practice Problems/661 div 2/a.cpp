#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define mp make_pair
#define ii pair<int, int>

const long long mod = 1e9 + 7;
const long long INF = 1e9 + 7;

void solve(){

}

int main(){
    int t;
    cin>>t;
    ll arr[t];
    map<ll, ll> m;
    set<ll> s;
    for(int i = 0 ; i < t ; i++){
        cin>>arr[i];
        m[arr[i]]++;
        s.insert(arr[i]);
    }
    ll tmp1=0,cnt3=0,cnt4=0;
    for(auto i = s.begin() ; i !=  s.end(); i++){
        tmp1 = m[*i];
        if(m[*i] - 4 >= 0){
            cnt3+=tmp1/4;
            tmp1 %= 4;
        }
        cnt4 += tmp1/2;
    }
     ll z,x;
    char c;
    ll sum[t];
    cin >> z;
    ll tmp2=0;
    LOOP: for(int i = 0 ; i < z ; i++)
    {
        cin>>c;
        cin>>x;
        if(c == '+'){
            tmp1 = m[x];
            tmp2 = m[x];
            m[x]++;
            if(m[x]/4 != tmp1/4){
                cnt3++;
                cnt4--;
            }
            else if(tmp1/2 != m[x]/2){
                cnt4++;
            }

        }
        else{
            tmp1 = m[x];
            tmp2 = m[x];
            m[x]--;
//            if(m[x] == 0)
//                s.erase(x);
            if(tmp1/4 != m[x]/4){
                cnt3--;
                cnt4++;
            }
            else if(tmp1/2 != m[x]/2){
                cnt4--;
            }
        }
        if((cnt3==1 && (cnt4/2)>=1) || (cnt3>1))
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
