#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int t;
  cin>>t;
  ll arr[t+5], sufgcd[t+5], final[t+5];
  for(int i = 1 ; i <= t; i++)
  {
    cin>>arr[i];
  }
  sufgcd[t] = arr[t];
  for(int i = t-1 ; i >= 1; i--)
  {
    sufgcd[i] = __gcd(arr[i], sufgcd[i+1]);
  }
  for(int i = 1 ; i < t ; i++)
  {
    final[i] = (arr[i] * sufgcd[i+1])/__gcd(arr[i], sufgcd[i+1]);
  }
  ll total = final[1];
  for(int  i = 2 ; i < t ; i++)
  {
    total = __gcd(total, final[i]);
  }
  cout<<total<<endl;
}
