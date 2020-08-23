#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int a,b,c;
    for(int i = 1 ; i <= tc ; i++)
    {
        cin>>a>>b>>c;
        if(a==b && a==c)
            cout<<"Case "<<i<<": "<<"Confused"<<endl;
        else if(a==b || a==c || b==c)
            cout<<"Case "<<i<<": "<<"Confused"<<endl;
        else if(a>b && a>c)
            cout<<"Case "<<i<<": "<<"A"<<endl;
        else if(b>a && b>c)
            cout<<"Case "<<i<<": "<<"B"<<endl;
        else if(c>b && c>a)
            cout<<"Case "<<i<<": "<<"C"<<endl;
    }
}
