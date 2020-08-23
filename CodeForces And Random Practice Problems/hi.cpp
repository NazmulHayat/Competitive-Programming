#include<bits/stdc++.h>
using namespace std;

int main()
{
    int arr[3];
    cin>>arr[0];
    cin>>arr[1];
    cin>>arr[2];
    int j,i=0;
    while(j==6)
    {
        if(arr[i]+arr[i+1] == arr[i+2])
        {
            cout<<arr[i]<<"+"arr[i+1]<<"="<<arr[i+2]<<endl;
            break;
        }
        if(arr[0]*arr[1] == arr[2])
        {
            cout<<arr[0]<<"*"arr[1]<<"="<<arr[2]<<endl;
            break;
        }
        if(arr[2]-arr[1]==arr[0])
        {
            cout<<arr[2]<<"-"arr[1]<<"="<<arr[0]<<endl;
            break;
        }
        if(arr[2]-arr[0] == arr[1])
        {
            cout<<arr[1]<<"-"arr[0]<<"="<<arr[1]<<endl;
            break;

        }
    }

}
