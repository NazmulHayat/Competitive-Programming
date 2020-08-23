#include<bits/stdc++.h>
using namespace std;


int recursion(vector< vector<int>>&tr, vector<int>&root, int depth, int p)
{
    if(tr[p].empty())
        return depth;
    int t=0,m;
    for(int i = 0 ; i < tr[p].size() ; i++)
    {
        m = recursion(tr, root, depth+1, tr[p][i]);
        if(t < m)
            t = m;
    }
    return t;
}

int main()
{
    int t,n;
    cin>>t;
    vector<int> root;
    vector< vector<int>> tr;
    tr.resize(t+1);
    for(int i = 1 ; i <= t ; i++)
    {
        cin>>n;
        if(n==-1)
            root.push_back(i);
        else{
            tr[n].push_back(i);
        }
    }
    int m=0;
    for(int i = 0 ; i < root.size() ; i++)
    {

        m = max(recursion(tr, root, 1, root[i]),m);
    }
    cout<<m<<endl;
}

