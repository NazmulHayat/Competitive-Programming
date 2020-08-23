#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        for(int k=i;k<=x-1;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<=i;j++)
        {
            if(j==i)
            {
                cout<<"*";
            }
            else
            cout<<"* ";

        }
        cout<<endl;
    }
}

