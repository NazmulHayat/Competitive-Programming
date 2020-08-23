#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

#define ll long long
#define vi vector<int>
#define vll vector<ll>

#define fr(i, a, b) for (int i=a; i<b; i++)
#define frd(i, a, b) for (int i=a-1; i>=b; i--)
#define fr(i, a) for (int i=0; i<a; i++)
const int MOD = 1000000007;

int main()
{
    fast;
    int t,n;
    cin>>t;
    while(t--)
    {
        int r, c;
        cin>>r>>c;
        char g[r][c];
        int f=0, l=0;
        for(int i = 0 ; i < r ; i++){
            for(int j = 0 ; j < c ; j++){
                cin>>g[i][j];
                if(j==c-1 && g[i][j]=='R'){
                    f++;
                }
            }
        }
        for(int i = 0 ; i < c ; i++){
            if(g[r-1][i]=='D') f++;
        }
        cout<<f<<endl;
    }
}
