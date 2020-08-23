#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a,b;
    cin>>a>>b;
    int arr[n] ,sum = 0;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    for(int j = a ; j <= b; j++)
    {
        sum += arr[j];
    }
    cout<<sum<<endl;
}
