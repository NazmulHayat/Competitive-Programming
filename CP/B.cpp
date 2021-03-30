#include <bits/stdc++.h>
//#include <ext/pb_ds/assoc_container.hpp> 
//#include <ext/pb_ds/tree_policy.hpp> 
//using namespace __gnu_pbds;
using namespace std;
 
//typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> indexed_set; 
#ifndef ONLINE_JUDGE
void timer(string msg=""){double now=(double)clock()/CLOCKS_PER_SEC;static double t=now;static int cnt=0;
double diff=now - t;if(cnt!=0)cout<<"\n[time "<<cnt<<" "<<msg<<": "<<fixed<<setprecision(3)<<diff<<" seconds]\n";cnt++;t=now;}
#define fast ;
#else
#define debug(...)
void timer() {return;}
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#endif
 
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) ((a) / gcd(a,b)) * (b)
#define all(x)  x.begin(),x.end()
#define rall(x) (x).rbegin(), (x).rend()
#define ll long long
#define ull unsigned long long
#define ld long double
#define vi vector<int>
#define vl vector<ll>
#define vs vector<string>
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define mem(a, b) memset(a, (b), sizeof(a))
#define ch() getchar()
#define sz(x) ((int)x.size())
#define umax(a, b) a=max(a, b)
#define umin(a, b) a=min(a, b)
#define imax INT_MAX
#define imin INT_MIN
#define maxa(ar,N) *max_element(ar,ar+N)
#define mina(ar,N) *min_element(ar,ar+N)
#define FOR(i,a,b) for (int i = (a); i < (b); ++i)
#define rep(i,a) FOR(i,0,a)
#define ROF(i,a,b) for (int i = (b)-1; i >= (a); --i)
#define urep(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

const int mod=1e9+7;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
string ds="RLDU";
const int mx = 5e3+10;

void solve(){
	int n, w;
	cin >> n >> w;
	int a, maxx=1;
	map<int, int> m;
	ll sum=0;
	vector<int> v;
	rep(i, n){
		cin >> a;
		v.pb(a);
		sum += a;
	}
	if(sum <= w){
		cout << 1 << endl;
		return;
	}
	sort(all(v));
	reverse(all(v));
	ll tmp=sum;
	while(i<=n){
		vi basearea;
		int j=i;
		while(j>0&&sum>0){
			if(v[j]<sum){
				sum-=v[j];
				basearea.pb(v[j]);
			}
			j--;
		}
		i++;
		sum=tmp;
	}
}

int main(){
	fast;
	//timer();
	int t=1;
	//freopen("in.txt", "r", stdin);
	cin >> t;
	FOR(i, 1, t+1){
    	//cout << "Case #" << i << ": ";
		solve();
	}
	//timer();
}

/* stuff you should look for
	# int overflow, array bounds (RE)
	# special cases
	# See the constraints 
	# write all the stuffs you have thought of and maybe the proofs
	# DON'T GET STUCK ON ONE APPROACH
*/
