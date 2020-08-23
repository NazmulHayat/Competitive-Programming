#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int x;
    long long int temp=0;
    cin>>x;
    long long int pos;
    cin>>pos;
    if(x%2!=0)temp = (x/2)+1;

    else temp = x/2;

    if(pos<=temp){
        cout<<pos+(pos-1)<<endl;
    }

    else cout<<(pos-temp)*2<<endl;

}
