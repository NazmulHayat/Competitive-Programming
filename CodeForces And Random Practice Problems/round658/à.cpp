#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mx 32000

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        bool a[1001], b[1001];
        int x, maax=0;
        memset(a, 0, 1001), memset(b, 0, 1001);
        for(int i = 0 ; i < n ; i++)
        {
            cin>>x;
            maax = max(x,maax);
            a[x] = 1;
        }
        for(int i = 0 ; i < m ; i++)
        {
            cin>>x;
            maax = max(x,maax);
            b[x] = 1;
        }
        bool c=0;
        vector<int> v;
        for(int i = 0 ; i <= maax ; i++){
            if(a[i] && b[i]){
                c=1;
                v.pb(i);
                break;
            }
        }
        if(c==0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            cout<<v.size()<<" ";
            for(int i = 0 ; i<v.size() ; i++)
                cout<<v[i]<<" ";
            cout<<endl;
        }
    }
}
