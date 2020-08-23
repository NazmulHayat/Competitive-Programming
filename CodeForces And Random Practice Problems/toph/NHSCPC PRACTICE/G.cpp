#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int ans = 1 ;
	map<long long int,long long int> map1;
	int tc;
	cin>>tc;
	long long int n;
	for(int i = 1 ; i <= tc ; i++)
	{
		cin>>n;
		if(!map1[n])
            map1[n] = i;
		else
            ans = max(ans, i-map1[n]+1);
	}
	cout<<ans;
}
