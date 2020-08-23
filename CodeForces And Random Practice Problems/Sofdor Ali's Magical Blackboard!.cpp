#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        string a,b,result;
        cin>>a>>b;
        result = a+b;
        cout<<(result - '0')/37<<endl;
    }
}
