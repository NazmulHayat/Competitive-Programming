#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc,temp=0;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        string s;
        cin>>s;
        int siz = sqrt(s.length()), l = 1;
        temp = s.length();

        for(int j=0;j<siz;j++)
        {
            for(int k=siz-l;k<=temp;k += siz){
                cout<<s[k];
            }
            l++;
        }
        cout<<endl;

    }
}
