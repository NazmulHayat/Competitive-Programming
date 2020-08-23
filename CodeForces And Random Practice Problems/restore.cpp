#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[4];
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    cin>>arr[3];
    int s = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+s);
    cout<<arr[3]-arr[0]<<" " ;
    cout<<arr[3]-arr[1]<<" ";
    cout<<arr[3]-arr[2]<<" ";
}
