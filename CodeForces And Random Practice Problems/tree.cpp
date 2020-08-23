#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;
    cin>>n;
    vector< vector<int>> b;
    vector<vector<int>> root;
    map<int> m;
    int temp, depth=1;
    int j=0;
    for(int i = 1 ; i <= n ; i++)
    {

        cin>>x;
        temp = x-1;
        if(x == -1)
            {
                root.push_back(x);
            }
        else{
            if(!m[temp])
                root[j]++;
            else{
                b[temp].push_back(i);
                m[temp]=1;
            }
        }
    }
}
