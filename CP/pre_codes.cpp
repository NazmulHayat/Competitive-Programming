#include<bits/stdc++.h>
using namespace std;

#define ll long long 

class Segment_tree{
	private:
		int height;
		int maxn;
		vector<int> ST;
	public: 
		int *arr;
		int array_size;
	    Segment_tree(int *a, int b){
			arr=a, array_size=b;
			height=log2(array_size);
			maxn=1<<height+1;	
			ST.resize(2*maxn);
		}
		//si strts from 0
		int construct(int si, int tl, int tr){
			if(tl==tr) { //leaf node
				ST[si]=arr[tr];
				return arr[tr];
			}
		    int mid = tl + (tr-tl)/2;
			ST[si] = construct(2*si+1, tl, mid) + construct(2*si+2, mid+1, tr); //summation example...n-1
			return ST[si];
		}
		void update(int si, int tl, int tr, int pos, int value, int diff){ //0...size(arr)
			arr[pos] = value;
			if(tl>pos || tr<pos) return;
			ST[si]+=diff;
			if(tl!=tr){
			    int mid = tl + (tr-tl)/2;
				update(2*si+1, tl, mid, pos, value, diff); 
				update(2*si+2, mid+1, tr, pos, value, diff); 
			}
		}
		int query(int si, int tl, int tr, int left, int right){
			if(tr<left || tl>right) return 0; //No overlap
			if(tl>=left && tr<=right) return ST[si]; //Total Overlap
		    int mid = tl + (tr-tl)/2; //Partial Overlap
			return query(2*si+1, tl, mid, left, right) + query(2*si+2, mid+1, tr, left, right);	
		}
		void print2(){
			debug(ST);
		}
};

class Fenwick_tree{

}

class Graph{
		
}

ll binpow(ll a, ll b) {
	ll res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main(){
	int n;
	cin >> n;
	int tmp[n];
	for(int i=0;i<n;i++){
		cin >> tmp[i];
	}
	Segment_tree s(tmp, n);
	s.construct(0, 0, n-1);
	int q;
	cin >> q;
	while(q--){
		int qq;
		cin >> qq;
		if(qq==0){
			int l, r;
			cin >> l >> r;
			cout << s.query(0, 0, n-1, l, r) << endl;
		}
		else{
			int p, v;
			cin >> p >> v;
			debug(abs(s.arr[p]-v));
			s.update(0, 0, n-1, p, v, abs(s.arr[p]-v));
		}
	}
}
