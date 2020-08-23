#include<bits/stdc++.h>
using namespace std;
int main()
{
    int in,d,x,n;
    cin>>in>>d;
    n = in % d;
    x = (in-n)/d;
    cout<<x<<" "<<n<<" "<<d<<endl;
}
