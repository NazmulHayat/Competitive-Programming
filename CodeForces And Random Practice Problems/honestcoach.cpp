#include<bits/stdc++.h>
using namespace std;
int main()
  {
    int tc;
    cin>>tc;
    while(tc--)
    {
      int n;
      cin>>n;
      int arr[n];
      for(int i = 0 ; i < n ; i++)
      {
        cin>>arr[i];
      }
    sort(arr, arr+n);
    int m = arr[n-1];
    for(int i = 0; i < n-1 ;i++)
    {
      m = min(m,arr[i+1]-arr[i]);
    }
    cout<<m<<endl;
  }
}
