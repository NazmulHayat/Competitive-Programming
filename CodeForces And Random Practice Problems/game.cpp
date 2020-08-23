#include <stdio.h>
#define ll long long int

int main()
{
      ll n,ctr=0,k;
   scanf("%lld",&n);
  ll x=2,y=1;

  while(x<=n){
  k=x;
  x=x+y;
  printf("%lld\n", x);
  y=k;
  ctr++;
  }
printf("%lld\n",ctr);


    return 0;
}
