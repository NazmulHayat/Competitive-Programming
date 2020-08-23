#include<bits/stdc++.h>
using namespace std;
int main()
{
  int tc,n;
  cin>>tc;
  while(tc--)
  {
    cin>>n;
    int arr[n],even = 0, odd = 0, sum = 0;
    for(int  i = 0 ; i < n ; i++)
    {
      cin>>arr[i];
      sum += arr[i];
      if(arr[i] % 2 == 0)
      {
        even++;
      }
      else
        odd++;
    }
    if(sum % 2 == 0){
        if(odd > 0 && even > 0)
          cout<<"YES"<<endl;
        else
          cout<<"NO"<<endl;
    }

    else
      cout<<"YES"<<endl;
  }
}
