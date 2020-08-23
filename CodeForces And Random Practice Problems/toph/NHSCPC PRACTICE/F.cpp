#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  string n;
  cin>>t;
  while(t--){
      cin>>n;
      int l = n[n.length()-1] - '0';
      cout<<(l*l)%10<<endl;
  }
}
