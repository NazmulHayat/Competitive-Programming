#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{

}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0)
            cout<<n/2<<endl;
        else
            cout<<(n-1)/2<<endl;
    }
}