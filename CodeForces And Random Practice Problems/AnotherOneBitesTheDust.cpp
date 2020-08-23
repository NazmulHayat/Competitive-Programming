#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,ans;
    long long int b;
    long long int x;
    cin>>a>>b>>x;
    long long int aa = a + x;
    long long int ab = b + x;
    long long int diff  = abs(aa - ab);
    if(diff > 1)
    {
        ans =aa + ab - diff + 1;
        cout<<ans<<endl;
    }

    else cout << ab+aa << endl;


}
