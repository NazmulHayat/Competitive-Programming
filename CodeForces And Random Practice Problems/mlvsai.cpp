#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, counter=0;
    cin>>tc;
    int a[tc], s[tc];
    double total = 0.0, avg = 0.0;
    for(int i = 1 ; i <= tc ; i++)
    {
        cin>>a[i]>>s[i];
        total += a[i];
    }
    avg = total/tc;
    for(int i = 1 ; i <= tc ; i++)
    {
        double div = a[i]/(s[i]*1.0);
        if(a[i] >= 150 && a[i] >= avg && div >= .7)
        {
            counter++;
        }
    }
    cout<<counter<<endl;
}
