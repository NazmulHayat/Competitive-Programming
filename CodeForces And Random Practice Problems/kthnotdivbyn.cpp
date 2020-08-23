#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long   int tc,n,k,t,j;
    cin>>tc;
    while(tc--)
    {
        cin>>n>>k;
        if((n*k) % n == 0)
            cout<<((n*k)-1)/(n-1)<<endl;
        else
            cout<<((n*k))/(n-1)<<endl;
    }

}
