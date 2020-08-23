#include<bits/stdc++.h>
using namespace std;
bool sortByVal(const pair<int, int> a,
               const pair<int, int> b)
{
    return (a.second < b.second);
}

int main()
{
    int tc, a;
    map<int, int> m;
    map<int, int> :: iterator itr;
    cin>>tc;
    int arr[tc];
    for(int i = 0 ; i < tc ; i++)
    {
        cin>>a;
        if(!m[a])
        {
            m[a] = i;
        }
        else
            m[a] = max(m[a], i);
        arr[i] = a;
    }
    vector<int> v;

    for(itr = m.begin(); itr != m.end(); ++itr ) {
        v.push_back( itr->second );
    }

    sort(v.begin(), v.end());
    cout<<v.size()<<endl;
    for(int i= 0 ; i < v.size() ; i++)
    {
        cout<<arr[v[i]]<<" ";
    }

}
