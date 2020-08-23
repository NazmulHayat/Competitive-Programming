#include<bits/stdc++.h>
using namespace std;
int main()
{
    int c,n,w;
    cin>>c>>n>>w;
    int temp = 0, total = 0;
    for(int i=1;i<=w;i++)
    {
        temp = c*i;
        total += temp;
    }
    if(total-n<=0)
        cout<<0;
    else
        cout<<total-n<<endl;
}
