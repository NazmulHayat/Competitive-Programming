#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define pb push_back
#define mp make_pair
#define ii pair<int, int>

const long long mod = 1e9 + 7;
const long long INF = 1e9 + 7;

void solve(){

}

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;
		vector<int> a(n);
		vector<int> cnt(n + 1, 0);
		int ans = 0;
		for (auto &it : a) {
			cin >> it;
			++cnt[it];
		}
		for (int l = 0; l < n; ++l) {
			int sum = 0;
			for (int r = l; r < n; ++r) {
				sum += a[r];
				if (l == r) continue;
				if (sum <= n) {
					ans += cnt[sum];
					cnt[sum] = 0;
				}
			}
		}
		cout << ans << endl;
	}
}
