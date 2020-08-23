#include<bits/stdc++.h>
using namespace std;
int main(){
	#ifndef ONLINE_JUDGE
		freopen("input.txt", "r", stdin);
		freopen("output.txt", "w", stdout);
	#endif
	int t;
	cin>>t;
	while(t--){
		int n, c=0;
		cin>>n;
		if(n%2==0)
			{
				cout<<n/2<<" "<<n/2<<endl;
				continue;
			}
		else{
			for(int i = 2 ; i * i <= n ; i++){
				if(n%i==0)
					{
						cout<<n/i<<" "<<n-(n/i)<<endl;
						c=1;
						break;
					}

			}
		}
		if(c==0)
			cout<<1<<" "<<n-1<<endl;
	}
 }