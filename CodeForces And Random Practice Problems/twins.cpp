#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, temp1=0,temp2=0;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
      cin>>arr[i];
    }
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr, arr+n);

    double div = ceil(x/2.0);

    for(int i=0;i<x;i++)
    {
        if(i < div)
            {
                temp1 = temp1 + arr[i];
            }

        else {
                temp2 += arr[i];
        }
    }
    cout<<temp1<<endl<<temp2<<endl;
    if(temp1 == temp2) cout<<(x/2)+1<<endl;

    else cout<<div<<endl;

}
