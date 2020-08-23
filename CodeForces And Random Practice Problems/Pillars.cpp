#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,sum,sum1,sum2,k,temp=0,tempi;
    bool flag =true;
    cin>>tc;
    int a[tc];
    for(int i=0;i<tc;i++)
    {
        cin>>a[i];
        if(temp<a[i])
           {
             temp = a[i];
             tempi = i;
           }
    }
    if(a[0] == temp)
            cout<<"NO"<<endl;

        else if(a[tc-1]==temp)
            cout<<"NO"<<endl;

    for(int j=0;j<tc;j++)
    {
        if(tempi>1)
        {
             for(int k=0;k<tempi-1;k++)
        }

    }


    return 0;
}
