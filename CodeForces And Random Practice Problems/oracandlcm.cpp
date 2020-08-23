#include<bits/stdc++.h>
using namespace std;

using ll = long long;



ll gcd(int a, int b){
  if(b == 0)
    return a;
  return gcd(b, a % b);
}

ll lcm(int a,int b){
  return (a / gcd(a,b))*b;
}

//int biggcd(set<ll> s, int first)
//{
//  set<ll> :: iterator it;
//  it = s.begin();
//  int result = first;
//  for(it = it ; it != s.end() ; ++it){
//      result = gcd(*it, result);
//      if(result == 1)
//        return 1;
//  }
//  return result;
//}

//error: in driver code I have to insert all kind of possibilities of lcm with each and every number

int main()
{
  int n;
  cin>>n;
  int arr[n+1];
  set<ll> s;

  for(int i = 0 ; i < n ; i++){
    cin>>arr[i];
  }
  for()
  cout<<result<<endl;
}
