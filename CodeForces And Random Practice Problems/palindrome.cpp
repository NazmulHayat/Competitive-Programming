#include<bits/stdc++.h>
using namespace std;
int main()
{
    string temp,s;
    int tc;
    cin>>tc;

    for(int i=1;i<=tc;i++)
    {
        cin>>s;
        temp = s;
        reverse(s.begin(), s.end());
        if(temp == s)
        {
            cout<<"Case "<<i<<": "<<" Yes"<<endl;
        }
        else  cout<<"Case "<<i<<": "<<" No"<<endl;
    }
}
