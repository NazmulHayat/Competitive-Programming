#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int temp = 0 ;
    int arr[tc];
    vector<int> v;
    cin>>arr[0];
    temp = arr[0];
    v.push_back(arr[0]);
    for(int i = 1 ; i < tc ; i++)
    {
        cin>>arr[i];
        temp  += arr[i];
        v.push_back(arr[i] + temp);
    }
    for(int j=0;j<v.size();j++)
    {
        cout<<v[j]<<" ";
    }
}
