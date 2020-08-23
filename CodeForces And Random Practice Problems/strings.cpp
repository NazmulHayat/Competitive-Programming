#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int len = s.length();
    for(int i=0;i<s.length();i++)
    {
        string s1 = s.substr(i, len);
        cout<<s1<<endl;

    }
}
