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
    int arr[n],odd=0,even=0;
    for(int i = 0 ; i < n ; i++)
    {
      cin>>arr[i];
      if(arr[i] % 2 != 0)
        odd++;
      else
        even++;
    }
    sort(arr, arr+n);
    int sm = 0;
    for(int i = 0 ; i < n - 1 ; i++)
    {
      if(arr[i+1] - arr[i] == 1){
        sm++;
      }
    }
    if(even % 2 != 0 && sm == 0)
    {
      cout<<"NO"<<endl;
    }
    else
      cout<<"YES"<<endl;
  }
}
