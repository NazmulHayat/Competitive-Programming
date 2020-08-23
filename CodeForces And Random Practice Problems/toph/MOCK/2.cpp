#include<bits/stdc++.h>
using namespace std;

#define ll long long
const unsigned int mod = 1000000007;

int lex(string x, string y){
    bool a=0,b=1;
        int l1=x.length(),l2=y.length();
        for(int i=0; i<(l1<l2?l1:l2); i++)
        {
            if(x[i]!=y[i])
                b=0;
            if(x[i]<y[i])
            {
                a=1;
                break;
            }
            if(x[i]>y[i])
                break;
        }
        if(!a && b&& (l1>l2))
            a=1;
        return a;
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL), cout.tie(0);
    int t;
    cin>>t;
    map<string, int> m;
    string s;
    for(int i = 0 ; i < t ; i++)
    {
        cin>>s;
        if(m[s]!=1)
        {
            m[s] = 1;
        }
        else{
            m[s]++;
        }
    }

    int n;
    cin>>n;
    string p;
    for(int i = 1 ; i <= n ;i++)
    {
        cin>>p;
        map<string, int> ::iterator it;
        string temp1,temp2;
        bool flag=0;
        int k=0;
        for(it = m.begin() ; it!=m.end();it++)
        {
            auto res = std::mismatch(p.begin(), p.end(), (it->first).begin());
            if (res.first == p.end())
            {
                temp1 = it->first;
                if(lex(temp1, temp2) && k > 0)
                   {
                    temp2=temp1;
                   }
                if(k==0) {
                    temp2 = temp1;
                }
                k++;
            }
        }
        cout<<"Case "<<i<<": "<<temp2<<" "<<m[temp2]<<endl;
    }
}
