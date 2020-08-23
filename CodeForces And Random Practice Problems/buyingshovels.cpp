#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    // Corner cases
    if (n <= 1)  return false;
    if (n <= 3)  return true;

    // This is checked so that we can skip
    // middle five numbers in below loop
    if (n%2 == 0 || n%3 == 0) return false;

    for (int i=5; i*i<=n; i=i+6)
        if (n%i == 0 || n%(i+2) == 0)
           return false;

    return true;
}


int main()
{
  int tc;
  cin>>tc;
  while(tc--)
  {
    int n,k;
    double x = 0;
    cin>>n>>k;
    int len = min(k, int(sqrt(n)));
    
    int ans=n;
    for(int i = 1; i <= len; i++)
    {
      if( n % i ) continue ;
  		if( i <= k ) ans = min( ans, n / i ) ;
  		if( ( n / i ) <= k ) ans = min( ans, i ) ;
    }
    cout<<ans<<endl;
  }
}
