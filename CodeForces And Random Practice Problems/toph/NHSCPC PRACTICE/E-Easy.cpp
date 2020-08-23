#include<bits/stdc++.h>
using namespace std;

#define ll long long int

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int c=0;
        set<ll> s;
        int score=0;
        map<ll, ll> m;
        for(int i = 0 ; i < n ; i++)
        {
            int r,x;
            cin>>r;
            for(int j = 0 ; j < r ; j++)
            {
                cin>>x;
                if(!m[x]) // m[1]
                {
                  s.insert(x);
                  m[x]=1;
                  c++;
                }
                else{
                    c--;
                }
            }
            if(score < c)
                score = c;
        }
        cout<<score<<endl;
    }

}
