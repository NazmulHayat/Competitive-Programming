#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int mod = 1000000007;
    int n,m,l,r;
    cin>>n;
    int arr[n];
    for(int i = 1 ; i <= n ; i++)
    {
        cin>>arr[i];
    }
    long long int total = 0, k;
    cin>>m;
    for(int f = 1 ; f <= m ; f++){
        cin>>l>>r>>k;

        for(int i = 1 ; i <= k ; i++)
        {
            for(int j = l ; j <= r; j++){
                total += arr[j];
             }
            for(int j = l ; j <= r ; j++)
                arr[j] = (arr[j] + total) % mod;

            total = 0;
        }
    }

    for(int i = 1 ; i <= n ; i++)
    {
        cout<<arr[i]<<" ";
    }
}
