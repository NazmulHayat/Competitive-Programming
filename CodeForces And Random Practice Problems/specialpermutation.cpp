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
    while(t--){
        int n,i;
        cin>>n;
        if(n==2 || n==3) {
            cout<<"-1"<<endl;
            continue;
        }
        if(n==4) {
            cout<<"3 1 4 2"<<endl;
            continue;
        }
        int arr[n+1];
        memset(arr, 0, sizeof(arr));
        for(i = 1; i <= n ; i+=2){
            cout<<i<<" ";
            arr[i] = 1;
        }
        i-=2;
        int j = i-3;
        cout<<j<<" ";
        arr[j] = 1;
        int l = (n/2) + 2;
        for(int k = 1 ; k <= n-l+1 ; k++){
            if((j+4)%2==0 && (j+4)<=n && !arr[j+4]){
                j+=4;
                cout<<j<<" ";
                arr[j] =1;
                continue;
            }
            if((j+3)%2==0 && (j+3)<=n && !arr[j+3]){
                j+=3;
                cout<<j<<" ";arr[j] =1;
                continue;
            }
            if((j+2)%2==0 && (j+2)<=n && !arr[j+2]){
                j+=2;
                cout<<j<<" ";arr[j] =1;
                continue;
            }
            if((j-4)%2==0 && (j-4)<=n && !arr[j-4] && j-4!=0){
                j-=4;
                cout<<j<<" ";arr[j] =1;
                continue;
            }
            if((j-3)%2==0 && (j-3)<=n && !arr[j-3] && j-3!=0){
                j-=3;
                cout<<j<<" ";arr[j] =1;
                continue;
            }
            if((j-2)%2==0 && (j-2)<=n && !arr[j-2] && j-2!=0){
                j-=2;
                cout<<j<<" ";arr[j] =1;
                continue;
            }
        }
        cout<<endl;
    }
}
