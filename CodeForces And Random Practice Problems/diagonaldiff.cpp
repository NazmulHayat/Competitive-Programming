#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int arr[x][x],total=0;
    for(int i=0;i<=x*x;i++)
    {
        cin>>arr[i][i];
    }
    int p=0;
    for(int j=0,k=x;j<=x,x>=1;j=j*2,k--)
    {
        total  = total + arr[j][j] + arr[p][k];
        p++;
        j=1;

    }
         cout<<total<<endl;
}
