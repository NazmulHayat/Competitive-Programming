#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    if(x>y)
    {
        cout<<x-y<<endl;
    }
    else{
        int r=(y/x)+1;
        cout<<(x*r)-y<<endl;
    }
}
