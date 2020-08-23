#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc,baikka=0;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        int n;
        cin>>n;
        long long int arr[n];
        for(int j=0;j<n;j++)
        {
            cin>>arr[j];
        }
        int s = sizeof(arr)/sizeof(arr[0]);
        sort(arr, arr+s);
        for(int j=0;j<n;j+=2)
        {
                if(arr[j+1]-arr[j] != 0)
                {
                        baikka = arr[j];
                        break;
                }

        }
        cout<<"Case #"<<i<<": "<<baikka<<endl;
        baikka = 0;
        s = 0;
    }
}
