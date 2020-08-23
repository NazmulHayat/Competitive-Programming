#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        int l=INT_MIN, m = INT_MAX;
        for(int i=0; i < n ; i++){
            cin>>x;
            if(l <= x)l=x;
            if(m >= x) m=x;
        }
        cout<<m<<" "<<l<<endl;
    }
}
