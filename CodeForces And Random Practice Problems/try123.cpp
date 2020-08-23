#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int a,b;
    char x;
    while(1)
    {cin >> a;
    cin >> x;
    cin >> b;
    if (x == '+')
    {
        cout<<a+b<<endl;
    }
        if (x == '-')
    {
        cout<<a-b<<endl;
    }
        if (x == '*')
    {
        cout<<a*b<<endl;
    }
        if (x == '/')
    {
        cout<<a/b<<endl;
    }
    }
 }
