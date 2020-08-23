#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        int fp,sp,tp;
        //first person..
        cin>>fp>>sp>>tp;
        if(fp == 1 && sp == 1 || sp == 1 && tp == 1 || fp == 1 && tp == 1)
        {
            counter++;
        }

        else if(fp == 1 && sp == 1 && tp == 1)
        {
            counter++;
        }

    }
    cout<<counter;
}
