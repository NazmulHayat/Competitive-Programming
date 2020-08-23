
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int t,n,q,l,r,x,count=0;
    cin>>t;
    for(int i=1;i<=t;i++){
        cin>>n;
        long long int a[n];
        for(int j=0;j<n;j++){
            cin>>a[j];
        }
        cin>>q;
        cout<<"Case "<<i<<":"<<endl;
        for(int k=1;k<=q;k++){
            cin>>l>>r>>x;
            for(int j=l-1;j<r;j++){
                if(a[j]<x){
                    count=count+(x-a[j]);
                }
                else if(a[j]>x){
                    count=count+(a[j]-x);
                }
            }
            cout<<count<<endl;
            count=0;
        }
    }
}
