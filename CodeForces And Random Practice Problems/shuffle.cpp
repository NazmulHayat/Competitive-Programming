#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,x;
        cin>>n>>x>>m;
        int p1=x,p2=x;
        int l,r;
        for(int i = 0 ; i < m ; i++)
        {
            cin>>l>>r;
            if(r >= p1 && l <= p1)
                p1 = l;
            if(l <= p2 && r >= p2)
                p2 = r;
        }
        cout<<p2-p1+1<<endl;
    }
}
