#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        bool flag=0;
        int r,g,b,w, tmp=0;
        cin>>r>>g>>b>>w;
        if((r%2)+(w%2)+(g%2)+(b%2) <= 1) cout<<"Yes\n";
        else if(r>0 && b>0 && g>0){
            r--,b--,g--,w+=3;
            if((r%2)+(w%2)+(g%2)+(b%2) <= 1) cout<<"Yes\n";
            else cout<<"No\n";
        }
        else cout<<"No\n";
    }
}


//solved.......
