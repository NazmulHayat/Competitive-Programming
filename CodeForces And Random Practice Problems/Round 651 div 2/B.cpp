#include<bits/stdc++.h>
using namespace std;
int main()
{

//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int> o;
        vector<int> e;
        e.reserve(2*n);
        o.reserve(2*n);
        for(int i=1;i<=n*2;i++)
        {
            int in;
            cin>>in;
            if(in%2)
                o.push_back(i);
            else
                e.push_back(i);
        }
        if(o.size()%2)
        {
            o.pop_back();
            e.pop_back();
        }
        else if(o.size()>=2)
        {
            o.pop_back();
            o.pop_back();
        }
        else
        {
            e.pop_back();
            e.pop_back();
        }
        for(int i=0;i<o.size();i+=2)
            cout<<o[i]<<" "<<o[i+1]<<endl;
        for(int i=0;i<e.size();i+=2)
            cout<<e[i]<<" "<<e[i+1]<<endl;
    }
}
