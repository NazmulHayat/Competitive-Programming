#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    long long int a,b,c,total=0,ans;
    cin>>tc;
    for(int i=1;i<=tc;i++)
        {
            cin>>a>>b>>c;
            total=a+b+c;
            ans = floor(total/2);
            cout<<ans<<endl;
            ans  = 0;
            total = 0;
        }

}
