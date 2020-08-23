#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define vll vector<ll>
#define pb push_back

/* tried
int main(){
    int t;
    cin>>t;
    while(t--){
        int s, l, r;
        cin>>s>>l>>r;
        ll arr[s], sum[s], sm=0,x=0,tmp=0,pos=0, tl=0;
        vll v;
        bool flag=0;
        l = l==r ? l,flag=0 : l-r+1,flag=1;
        for(int i = 0 ; i < s ; i++){
            cin>>arr[i];
            sm += arr[i];
            sum[i] = sm;
            if(l > -1  && i > 0){
               x = (ceil(l/(r*1.0))*arr[i])+(ceil(l/(r*1.0))*arr[i-1]);
               cout<<x<<" "<<sm<<" "<<arr[i-1]<<" "<<(x + sm - arr[i-1])<<endl;
               if(sm >= x + sm - arr[i-1]){
                    pos = i;
                    cout<<"hi12121212: "<<pos<<endl;
                    tmp = sm;
                    tl=l;
               }
               else if((x + sm - arr[i-1]) >= tmp){
                    pos = i;
                    cout<<"hi: "<<pos<<endl;
                    tmp = x+sm - arr[i-1];
                    tl=l;
                    //cout<<"TMP: "<<tmp<<" L: "<<l<<" \n"<<(ceil(l/(r*1.0))*arr[i])<<" + "<<(ceil(l/(r*1.0))*arr[i-1])<<" = x: "<<x<<" POS: "<<pos<<endl;
                }
            }
            l--;
        }
        for(auto i : sum) cout<<i<<" ";
        cout<<endl;
        if(flag) tl += r-1;
        cout<<tmp<<" pos: "<<pos<<" "<<tl<<endl;
        if(tl == 0) {
                cout<<tmp<<endl;
                continue;
        }
        if(arr[pos-1] >= arr[pos+1]){
            tmp = tl >= r ? (ceil(tl/(r*1.0))*arr[pos])+(ceil((tl-1)/(r*1.0))*arr[pos-1]) :
                (tl)*arr[pos] + ((tl-1)*arr[pos-1]);
        }
        else{
            tmp = tl >= r ? (ceil(tl/(r*1.0))*arr[pos])+(ceil((tl-1)/(r*1.0))*arr[pos+1]) :
                (tl)*arr[pos] + ((tl-1)*arr[pos+1]);
        }
        cout<<tmp+sum[pos-1]<<endl;
    }
}
*/

int totsum(ll arr[], int i, int j, ll tmp)
{
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll s,l,r;
        cin>>s>>l>>r;
        ll arr[s+1], sm[s+1], sum=0, mx=0, tmp = l, pos=0;
        for(int i = 1 ; i <= s ; i++)
        {
            cin>>arr[i];
            if(tmp >= 0)
            {
                sum += arr[i];
                sm[i] = sum;
            }
            tmp--;
        }
        ll j=l, k=0, p =0, tmpa=0;
        tmp=0;
        if(r==0)
        {
            cout<<sum<<endl;
            continue;
        }
        for(int i = 2 ; i <= l ; i++)
        {
            int z = l-(i-1);
            int a = z%2==0 ? z/2 : (z/2)+1;
            int b = z-a;
            if(b > r){
                int c = l-(i-1);
                b=r;
                a=r+1;
                if(c-(r+r) < 0){
                    a = c/2;
                    b = c-a;
                }
            }

            tmp = ((a)*arr[i]) + (b*arr[i-1]);
            tmp += sm[i-1];
            tmpa = a+b+i-1;
            if(l - tmpa > 0){
                tmp += sm[i+l-tmpa+1] - sm[i];
            }
            mx = max(tmp, mx);
            tmp = 0;
        }
        if(mx > sum)
            cout<<mx<<endl;
        else
            cout<<sum<<endl;
    }

}

