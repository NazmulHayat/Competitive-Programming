#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define mx 32000

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,c=1;
        cin>>n;
        int x,p,f=0,s=0,cnt1=0,cnt2=0;
        //1111
        //112
        //2
        //1112111
        //fsfsfsf
        //11111111
        //fsfsfsfs
        int j=0;
        bool of=1;
        int one=0,ts,z=1;
        for(int i = 0 ; i < n ; i++){
            cin>>x;
            if(x==1 && of){
                one++;
            }
            else{
                of=0;
                j++;
                if(j==1)
                {
                    ts = i;
                    z=x;
                }
            }
        }
        //22112
        //..2
        string ans="";
        if((ts == 0&&z!=1) || one == 0){
            if(ts%2==0)
                ans="First";
            else
                ans="Second";
        }
        else if(one!=0){
            if(one%2==0)
                ans="Second";
            else
                ans="First";
            if(!of){
                ans = ans == "First" ? "Second" : "First";
            }
        }
        cout<<ans<<endl;
    }
}
