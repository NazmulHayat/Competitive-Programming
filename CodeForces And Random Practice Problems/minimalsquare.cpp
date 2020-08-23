#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int ans;
        ans=((a+a)<b?b:(a+a));
        int temp;
        temp=((b+b)<a?a:(b+b));
        ans=(ans<temp?ans:temp);
        int l=(a<b?b:a);
        temp=((a+b)<l?l:(a+b));
        ans=(ans<temp?ans:temp);
        cout<<ans*ans<<endl;
    }
}
