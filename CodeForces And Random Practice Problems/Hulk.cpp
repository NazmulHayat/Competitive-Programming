#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    string s;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        if(i==x)
        {
            if((i-1)%2==0)
            {
                cout<<"I hate it";
                return 0;
            }
            else
            {
                cout<<"I love it";
                return 0;
            }
        }
        if(i%2==1)
        {
            s = "I hate that ";
            cout<<s;
        }
        if(i%2==0)
        {
            s = "I love that ";
            cout<<s;
        }

    }
}
