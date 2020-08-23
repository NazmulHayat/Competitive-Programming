#include<bits/stdc++.h>
using namespace std;
#define ll long long
int time(int x)
{
    int c=0;
    cout<<x%1<<endl;
    while(x%1 == 0)
    {
        x/=6;
        c++;
    }
    return c;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k,tot=0,y;
        cin>>n>>k;
        ll c=0,x=0,cnt=0;
        bool flag=1;
        map<ll, ll> m;
        for(ll i = 1 ; i <= n ; i++)
        {
            cin>>c;
            if(c%k==0)
            {
                y=0;
                cnt++;
            }
            else
            {
                y = k-(c%k);
                if(!m[y])
                {
                    m[y]=1;
                }
                else
                {
                    x = y;
                    y = (m[y]*k)+y;
                    ++m[x];
                }
                tot = y > tot ? y : tot;
            }
        }
        tot = cnt == n ? 0 : tot+1;
        cout<<tot<<endl;
    }
}
