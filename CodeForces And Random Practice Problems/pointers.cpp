#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007

long long int m = 1000000007;

int power(int a, int b)
{
    long long int res=1;
    for(int i=1;i<=b;i++)
        res = (res*a) % m;

    return res;
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    for(int i=1;i<=7;i++)
        cout<<arr[i]+arr[i-1]<<endl;
}
