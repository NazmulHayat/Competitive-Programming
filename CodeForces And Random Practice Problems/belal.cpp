#include<bits/stdc++.h>
using namespace std;
int fact(int n){

}


int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i = 0 ; i < n ; i++)
        cin>>arr[i];

    int temp = n-k;
    cout<<fact(k)/fact(temp);
}
