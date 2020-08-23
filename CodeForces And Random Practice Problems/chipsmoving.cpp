#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,o=0,e=0;
    int chips;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>chips;

    if(chips%2==0)
    {
        o++;
    }
    else
    {
        e++;
    }
    }
    cout<<min(o,e)<<endl;
    return 0;
}
