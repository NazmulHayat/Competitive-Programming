//Shitman Runtime srrrrroooooorrrrr

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x, diff=0,j=0,counter=0,co9=0,co8=0,co7=0,co6=0;
    cin>>x;
    vector <int> temp;
    string ss, tt;
    int s[x], t[x];
    for(int i=0;i<x;i++)
    {
        cin>>ss[i];
        s[i] = ss[i] - '0';
    }
    for(int i=0;i<x;i++)
    {
        cin>>tt[i];
        t[i] = tt[i] - '0';
    }
    while(j!=x)
    {
        diff = abs(t[j] - s[j]);
        if(diff<=5)
        {
         counter = counter + diff;
        }
        else {
            temp.push_back(j);
        }
        j++;
    }
    for(int j=0;j<temp.size();j++)
    {
        if(t[temp[j]]==9)
        {
            s[temp[j]]++;
            counter = counter + s[temp[j]];
        }
        if(s[temp[j]]==9)
        {
            t[temp[j]]++;
            counter = counter + t[temp[j]];
        }
        if(t[temp[j]]==8)
        {
            s[temp[j]]+=2;
            counter = counter + s[temp[j]];
        }
        if(s[temp[j]]==8)
        {
            t[temp[j]]+=2;
            counter = counter + t[temp[j]];
        }
        if(t[temp[j]]==7)
        {
            s[temp[j]]+=3;
            counter = counter + s[temp[j]];
        }
        if(s[temp[j]]==7)
        {
            t[temp[j]]+=3;
            counter = counter + t[temp[j]];
        }
        if(t[temp[j]]==6)
        {
            s[temp[j]]+=4;
            counter = counter + s[temp[j]];
        }
        if(s[temp[j]]==6)
        {
            t[temp[j]]+=4;
            counter = counter + t[temp[j]];
        }
    }
    cout<<counter<<endl;

}

