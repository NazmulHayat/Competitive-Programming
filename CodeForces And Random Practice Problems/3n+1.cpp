#include<bits/stdc++.h>
using namespace std;
int solve(int l, int n)
{
    int counter=1;
    while(n!=l)
    {
        if(n%2==0)
        {
            n = n/2;
            counter++;
        }
        else
        {
            n = (3*n)+1;
            counter++;
        }
    }
    return 6+(counter*2);
}
int main()
{
    int n, l;
    cin>>l>>n;
    cout<<solve(l,n)<<endl;
}
