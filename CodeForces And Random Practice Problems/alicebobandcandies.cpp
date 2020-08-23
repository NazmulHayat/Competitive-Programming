#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--){
        int n,sum=0;
        int c,c1=0,c2=0,flg, cnt=0;
        cin>>n;
        int arr[n];
        for(int i = 0 ; i < n; i++){
            cin>>arr[i];
            sum += arr[i];
        }
        int l = -1, r = n,j,alice=0,bob=0,suml=0,sumr=0,t=0;

        while(l < r){
            if(suml > sumr){
              sumr=0;
              for(j = r-1; j > l ; --j)
                {
                    bob += arr[j];
                    sumr += arr[j];
                    t=1;
                    if(sumr > suml)
                        break;

                }

                r = j;
            }
            else{
                suml=0;
                for(j = l+1; j < r ; ++j)
                {
                    alice += arr[j];
                    suml += arr[j];
                    t=1;
                    if(suml > sumr)
                        break;

                }
                l = j;
            }
            cnt+=t;
            t=0;
        }
        cout<<cnt<<" "<<alice<<" "<<bob<<endl;
    }
}
