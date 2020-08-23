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
    int tc;
    cin>>tc;
    for(int i = 1 ; i <= tc ; i++){
        int n,x;
        cin>>n;
        vi arr;
        for(int i = 0 ; i < n ; i++){
            cin>>x;
            arr.pb(x);
        }
//        for(int i = 0 ; i < n ; i++){
//            for(int j = 0 ; j < n ; j++){
//                if(i!=j && (arr[i] == arr[j] || abs(arr[i] - arr[j]) <= 1)){
//                    if(arr[i] <= arr[j]){
//                        arr.erase(arr.begin() + i);
//                        n--;
//                    }
//                    else{
//                        arr.erase(arr.begin() + j);
//                        n--;
//                    }
//                }
//            }
//        }
//        if(arr.size() == 1) cout<<"YES"<<endl;
//        else cout<<"NO"<<endl;
        int c=0, j=0;
        sort(arr.begin(), arr.end());
        for(int i = 1 ; i < n ; i++){
            if(abs(arr[j] - arr[i]) <= 1){
                c++;
            }
            j++;
        }
        if(c >= arr.size()-1) cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
