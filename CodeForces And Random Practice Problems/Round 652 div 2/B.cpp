#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{

}

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        int t;
        cin>>t>>s;
        bool flag=1;
        int i = s.length()-1;
        //11001101
        //01234567
        while(flag!=0)
        {
            if(s[i-1] == '1' && s[i] == '0')
            {
                if(s[i+1] == '0')
                {
                    s.erase(s.begin()+i);
                    continue;
                }
                if(s[i-2] == '1')
                {
                    s.erase(s.begin()+i-1);
                    continue;
                }
                else{
                    s.erase(s.begin()+i-1);
                    continue;
                }
            }
            if(i==0)
                flag=0;
            i--;
        }
        cout<<s<<endl;
    }
}

