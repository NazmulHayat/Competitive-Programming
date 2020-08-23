#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,tc2,counter1r=0,counter1l=0;
    string sr,sl;
    cin>>tc;
    for(int i=1;i<=tc;i++){
        cin>>tc2;
        for(int j=0;j<tc2;j++)
        {
            cin>>sr[j];
            if(sr[j]=='1')
                counter1r++;

        }
        for(int k=0;k<tc2;k++)
        {
            cin>>sl[k];
            if(sl[k]=='1')
                counter1l++;

        }

         if(counter1l==counter1r)
            cout<<"YES"<<endl;

         else cout<<"NO"<<endl;
    }

}
