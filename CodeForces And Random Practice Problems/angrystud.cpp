#include<bits/stdc++.h>
using namespace std;
int mian()
{
    int tc;
    cin>>tc;int temp = tc,counter=0;
    char s[105];
    for(int i=0;i<tc;i++)
        {
            scanf("%s", s);
            char j = s[temp];
            while(j!='A')
            {
                j = s[temp];
                if(s[temp] == 'P')
                    counter++;
                temp--;
            }
            cout<<counter<<endl;
        }

}
