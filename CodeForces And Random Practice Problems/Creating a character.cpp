#include<bits/stdc++.h>
using namespace std;

int main()
{
    int addS, addI, tc, str, in, exp;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        cin>>str>>in>>exp;
        addS = max(0,((exp+in-str+2)/2)); //The value cant be negative so max with 0
        cout<<max(0, exp - addS + 1)<<endl;
    }
}

