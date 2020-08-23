#include<iostream>
using namespace std;
int main()
{
  int tc,counter=0;
  long long n,i;
  cin >> tc;
  for(int j=1;j<=tc;j++)
  {
    cin>>n;
    for(i = 2; i < n; i++)
      {
          if(n % i == 0)
          {
              counter++;
          }
      }
      if (counter==0)
          cout << "YES"<<endl;
      else
          cout << "NO"<<endl;
}
    return 0;
}
