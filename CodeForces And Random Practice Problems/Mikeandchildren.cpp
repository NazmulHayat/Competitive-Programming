#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n, counter = 0;
   int arr[100];

    cin >> n;

    for(i = 0; i < n; ++i)
    {
       cin >> arr[i];
    }
    for(i = 1;i < n; ++i)
    {

       if(arr[0] < arr[i])
           arr[0] = arr[i];
    }
    int large = arr[0];

    for(int i = 1;i < n; i=i+2)
        for(int j = 1;j <= n; j++)
        {
            if(arr[j] + arr[i] == large)
                counter++;
        }
        cout<<counter;
    }

