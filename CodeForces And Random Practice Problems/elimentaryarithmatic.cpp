#include<iostream>
using namespace std;
int main()
{
    string x;
    string z;
    cin>>x>>z;
    int c = 0;
    int s[x.length()+1];
    int y[z.length()+1];
    int temp=0;
    int maximum = max(z.length(), x.length());
    int minimum= min(z.length(), x.length());
    for(int j=0;j<x.length();j++)
    {
        s[j] = x[j] - '0';
    }
    for(int j=0;j<z.length();j++)
    {
        y[j] = z[j] - '0';
    }
    for(int i=maximum-1;i>=0;i--)
    {
       s[i] = s[i] + y[i];
       if(s[i]>9)
       {
           temp = s[i] -  10;
           s[i-1] += 1;
           s[i] = temp;
           if(i == 0)
           {
               s[i] = s[i];
               s[i-1] += 1;
        }
            temp = 0;
            cout<<s[i]<<endl;
       }
    }
    for(int i=0;i<x.length();i++)
        cout<<s[i];
}
