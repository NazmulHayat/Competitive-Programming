#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter = 0;
    string s;
    string x;
    cin>>s>>x;
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<x.length();j++)
        {
            if(s[i] == x[j])
                {
                    counter++;
                    break;
                }
        }
    }
    if(counter == s.length())
        cout<<"Yes";

    else cout<<"No";
}
