#include<bits/stdc++.h>
#include<climits>
using namespace std;


int bruteforce(int arr[], int n, int mod)
{
    int ans = INT_MIN;
    for(int start_index = 0 ; start_index < n ; ++start_index){
        int sum = 0;
        for(int sub_array_size = 1 ; sub_array_size <= n; ++sub_array_size)
        {
            if(sub_array_size+start_index > n)
                break;

            sum += arr[sub_array_size + start_index - 1];
            sum = sum % mod;
            ans = max(sum, ans);
        }
    }
    return ans;
}


int main()
{
    int tc;
    cin>>tc;
    for(int i = 1 ; i <= tc ; i++)
    {
        int n,k, total = 0;
        cin>>n>>k;
        int arr[n];
        for(int i = 0; i < n ; i++)
        {
            cin>>arr[i];
        }
        cout<<bruteforce(arr, n, k);
    }
}
