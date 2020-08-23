#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,n;
    double x;
    cin>>tc;
    while(tc--){
        cin>>n;
        bool flag = false;
        int sum = 1, i = 1, p;
        while(i <= n){
            p = pow(2,i);
            sum += p;
            x = n/(sum*1.0);
            if(x == int(x)){
                flag = true;
                break;
            }
            i++;
        }
        if(flag)
            cout<<int(x)<<endl;
        else
            cout<<1<<endl;
    }
}
