#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int a,b,mul;
        cin>>a>>b;
        mul = (a*60)+b;
        cout<<(24*60)-mul<<endl;

    }
}
