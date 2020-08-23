#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long int total=0;
    cin>>n;
    long long int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        total = total + arr[i];
    }
    cout<<total<<endl;
}
