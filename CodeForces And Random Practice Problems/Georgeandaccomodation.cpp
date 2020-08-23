#include<bits/stdc++.h>
using namespace std;
int  main()
{
    int tc;
    int counter=0;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int p,q;
        cin>>p>>q;
        if(q-p>=2)
            {
                counter++;
            }

    }
    cout<<counter<<endl;
}

