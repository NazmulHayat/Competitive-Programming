#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    string tar = "abacabazzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzzz";
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int j=0,c=0;
        for(int i = 0 ; i < n ; i++){
            if(s[i]!=tar[j] && s[i]!='?'){
                j=0;
                if(c!=7)c=0;
            }
            if(tar[j] == s[i]){
                j++, c++;
            }
            else if(s[i] == '?'){
                s[i] = tar[j];
                c++, j++;
            }
        }
        if(c > 7 && c < 14) c=7;
        if(c==7){
            cout<<"YES"<<endl;
            cout<<s<<endl;
        }
        else cout<<"NO "<<s<<endl;
    }
}
