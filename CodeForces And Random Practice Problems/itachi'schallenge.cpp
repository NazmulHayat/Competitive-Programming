#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,l,r,k;
    cin>>n;
    int arr[n];
    for(int i = 1 ; i <= n ; i++)
    {
        cin>>arr[i];
    }
    cin>>m;
    cin>>l>>r>>k;
    int total = 0;
    vector<int> v;
    for(int j = l ; j <= r; j++){
            total += arr[j];
        }
    for(int i = 1 ; i <= k ; i++)
    {
        for(int j = 1 ; j <= n ; j++)arr[j] = arr[j] + total;
    }
    for(int i = 1 ; i <= n ; i++)
    {
        cout<<arr[j]<<" ";
    }
}
