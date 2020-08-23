#include<iostream>
using namespace std;
int main()
{
    string s;
    string y;
    cin>>s>>y;
    int temp=0;
    int maximum = max(s.length(), y.length());
    int minimum= min(s.length(), y.length());
    for(int i=maximum-1;i>=0;i++)
    {
       s[i] = (int)s[i] - '0';
       y[i] = (int)y[i] - '0';
       s[i] = s[i] + y[i];
       if(s[i]>9)
       {
                  temp = s[i] - 10;
                  s[i-1] = temp+s[i-1];
       }
    }
    for(int i=0;i<s.length();i++)
        cout<<s;
}
