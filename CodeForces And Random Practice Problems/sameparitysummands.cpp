#include<bits/stdc++.h>
using namespace std;

bool flag = false;

void even_approach(int n, int k){
    cout<<"YES"<<endl;
    for(int i = 1; i <= k-1 ; i++){
        cout<<2<<" ";
    }
    cout<<abs(n-((k-1)*2))<<endl;

}


void odd_approach(int n, int k){
    cout<<"YES"<<endl;
    for(int i = 1; i <= k-1 ; i++){
        cout<<1<<" ";
    }
    cout<<abs(n-(k-1))<<endl;
}


int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n,k;
        cin>>n>>k;
        if(n < k) cout<<"NO"<<endl;
        else if((n-(k-1)) % 2 != 0 && (n-(k-1))>0)
            odd_approach(n,k);
        else if((n-((k-1)*2)) % 2 == 0 && (n-((k-1)*2)) > 0)
            even_approach(n,k);
        else
            cout<<"NO"<<endl;
    }
}
