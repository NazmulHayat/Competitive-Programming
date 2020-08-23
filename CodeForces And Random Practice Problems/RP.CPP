#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    long long int a,b,counter=1,temp;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        cin>>a>>b;
        long long int siz[a];

        for(long long int j=1;j<=a;j++)
        {
            siz[j-1] = j;

        }
        if(b==1)
            {
                siz[0] = 0;
                cout<<siz[1]<<endl;
            }

        else {

            for(long long int k=1;k<=b-1;k++)
            {
                if(k==1)
                    {
                        counter=counter+1;
                        siz[counter]=0;
                    }
                else
                    {
                        counter=counter+2;
                        siz[counter]=0;
                    }

            }
            for(long long int f=0;f<a;f++)
            {
                if(siz[f] == 0)
                    temp = f;

            }
            cout<<siz[temp+1]<<endl;
            counter=1;


        }

    }

}
