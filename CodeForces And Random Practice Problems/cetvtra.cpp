#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v;
    vector<int> y;
    int n,m;
    for(int i=0;i<3;i++)
    {
        cin>>n>>m;
        v.push_back(n);
        y.push_back(m);
    }
    int temp1 = 0, temp2 = 0;

    sort(v.begin(), v.end());
    sort(y.begin(), y.end());
    for(int i=0;i<v.size();i++)
    {
        if(v[i] != v[i+1] && v[i] != v[i-1])
            temp1 = v[i];

        if(y[i] != y[i+1] && y[i] != y[i-1])
            temp2 = y[i];
    }
    cout<<temp1<<" "<<temp2<<endl;

}
