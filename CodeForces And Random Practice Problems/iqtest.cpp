#include<iostream>
#include<vector>
using namespace std;


int main()
{
    int n, countereven=0, counterodd=0, ce,co;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n;i++)
    {
        cin>>arr[i];
        if(arr[i] % 2 == 0)
        {
            countereven++;
            ce = i;
        }
        else {
                counterodd++;
                co = i;
        }
    }
    if(countereven>counterodd)
    {
        cout<<co<<endl;
    }
    else cout<<ce<<endl;
}
