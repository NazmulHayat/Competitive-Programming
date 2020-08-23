#include<bits/stdc++.h>
using namespace std;

#define ll long long
const unsigned int mod = 1000000007;
int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(0);
    int t;
    cin>>t;
    int n;
    cin>>n;
    ll arr[t];
    ll sum=0;
    int x;
    map<int,int> m;
    for(int i = 1 ; i <= t ; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0 ; i < n ; i++)
    {
        int l,r;
        cin>>l>>r;
        if(!m[l] && !m[r])
            {
                sum += min(arr[l], arr[r]);
                m[l]=10;
                m[r]=10;
            }
        else{
            m[l]=10;
            m[r]=10;
        }
    }
    cout<<sum<<endl;
}
