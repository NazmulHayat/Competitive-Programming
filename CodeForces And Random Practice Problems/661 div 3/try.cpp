#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> a(n*2+1,0);
		int c=0;
		for(int i=0;i<n;i++){
			int f;
			cin>>f;
			a[f]++;
		}
		for(int i=2;i<=n*2;i++){
			int ct=0;
			for(int i1=1;i1<=i/2;i1++){

				ct+=(i1==i-i1?a[i1]/2:min(a[i1],a[i-i1]));
			}
			c=max(ct,c);
		}
		cout<<c<<endl;
	}

}
