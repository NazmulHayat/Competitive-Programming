#include<bits/stdc++.h>
using namespace std;

int c=0;

int recursion(vector<vector<int>>&tr, bool chor[], int cats, bool isdone[], int p, int& target)
{
    if(tr[p].empty() || cats > target)
        return c;
    int m=0;
    for(int i = 0 ; i < tr[p].size() ; i++)
    {
        if(!isdone[tr[p][i]])
        {
            if(chor[tr[p][i]])
                m = recursion(tr, chor, cats+1, isdone, tr[p][i], target);
            else{
                m = recursion(tr, chor, 0, isdone, tr[p][i], target);
            }
            isdone[tr[p][i]] = 1;
        }
    }
}

int main()
{
    int t,cats,n,x;
    cin>>t>>cats;
    vector<int> root;
    vector< vector<int>> tr;
    tr.resize(t+1);
    bool chor[t], isdone[t];
    for(int i = 0 ; i < t ; i++)
    {
        cin>>chor[i];
    }
    for(int i = 1 ; i <= t-1 ; i++)
    {
        cin>>n>>x;
        tr[n].push_back(x);
        tr[x].push_back(n);
        isdone[n] = 0 ;
        isdone[x] = 0;
    }
    int p = 0;
    cout<<recursion(tr, chor, 0, isdone, p, cats)<<endl;
}
