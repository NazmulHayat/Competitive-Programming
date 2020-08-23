#include<bits/stdc++.h>
using namespace std;

#define FOR(j,a,b) for(int j=a;j<=b;j++)
#define RFOR(j,a,b) for(int j=b;j>=a;j--)


int main(){
    int n,m,p1,p2,c;
    cin>>n>>m>>p1>>p2;
    map<int,int> mapp;
    cout<<p1<<" "<<p2<<endl;
    FOR(c,1,n){
        if(c!=p1)cout<<c<<" "<<p2<<endl;
    }
    c=p2;
    mapp[c]=1;
    int z=1;
    FOR(i,1,m){
        if(i==c)continue;
        for(int j=1;j<=m;j++)if(!mapp[j]){p2=j;break;}
        int j,k,tmp;mapp[p2]=1;
        if(z%2)RFOR(k,1,n){cout<<k<<" "<<p2<<endl;tmp=k;}
        else FOR(j,1,n){cout<<j<<" "<<p2<<endl;tmp=j;}
        p1=tmp;z++;
    }
}
