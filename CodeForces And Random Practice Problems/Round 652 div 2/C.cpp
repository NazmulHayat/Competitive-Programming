#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{

}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       ll n,f;
       cin>>n>>f;
       ll x;
       vector<ll> score;
       ll sum=0;
       ll arr[f];
       for(int i = 0 ; i < n ; i++)
       {
           cin>>x;
           score.push_back(x);
       }
       sort(score.begin(), score.end());
       for(int i = 0 ; i < f ; i++)
       {
           cin>>arr[i];
       }
       sort(arr, arr+f, greater<ll>());
       for(int i = 0 ; i < f ; i++)
       {
           if(arr[i] > 1)
           {
               sum+=score.back();
               score.pop_back();
               sum+=score[0];
               score.erase(score.begin(), score.begin()+arr[i]-1);
           }
           else{
               sum+=(score.back()*2);
               score.pop_back();
           }
       }
       cout<<sum<<endl;
   }
}
