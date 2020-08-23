#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l=0;
    int tc;
    int sum, remain;
    cin>>tc;
    int exit[tc], enter[tc];
    cin>>exit[0]>>enter[0];
    sum = enter[0];
    int large[tc];
    large[0] = sum;
    for(int i=1;i<tc;i++)
    {
        cin>>exit[i]>>enter[i];
        sum  = sum - exit[i];
        sum = sum + enter[i];
        large[i] = sum;
    }
    for(int j = 0; j < tc; j++)
    {
        if(large[j]>l)
            l  = large[j];
    }
    cout<<l<<endl;
}
