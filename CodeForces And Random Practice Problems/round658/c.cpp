#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mx 32000

string fchng(string a, int r){
    string s="";
    int j = r-1;
    //11101 001
    //00010
    //01000
    //01000 001
    //1234
    //432  1
    //1 3
    //234
    for(int i = 0 ; i < r ; i++){
        if(a[j] == '0') s+='1';
        else s+='0';
        j--;
    }
    for(int i = r ; i < a.length() ; i++)
        s+=a[i];
    return s;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a,s;
        cin>>a>>s;
        int i=0,j=n-1;
        int c=1, l=0,r=n-1;
        vector<int> v;
        if(a==s)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i = 0 ; i < a.length() ; i++){
            if(i%2){
                if(a[r] != s[n-1-i])
                    v.pb(1);
                r--;
            }
            else{
                if(a[l] == s[n-1-i])
                    v.pb(1);
                l++;
            }
            v.pb(n-i);
        }
        cout<<v.size()<<" ";
        for(auto &i : v)
            cout<<i<<" ";
        cout<<endl;
    }
}
