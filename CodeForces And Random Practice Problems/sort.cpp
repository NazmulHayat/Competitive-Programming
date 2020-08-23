#include<bits/stdc++.h>
using namespace std;
void bbs( int Arr[], int l)
{
    int counter= 0;

    if (l == 0) {
       return;
    }

    for (int j = 0; j < l - 1; j++) {
        if (Arr[j] > Arr[j + 1]) {
            swap(Arr[j], Arr[j + 1]);
            counter++;
        }
    }
   return bbs(Arr, l - 1);
   return counter;
}


int main()
{
    int x, n,counter=0;
    cin>>x;
    long long int arr[x];
    long long int temp;
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
      cout<<bbs(arr, x);
}
