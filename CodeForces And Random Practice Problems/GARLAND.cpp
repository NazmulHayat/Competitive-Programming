#include<bits/stdc++.h>
using namespace std;

int asearch(int arr[], int num, int s)
{
    for(int i=1;i<=s;i++)
    {
        if(arr[i] == num)
            {
                return 0;
                break;
            }
    }
    return 1;
}

int main()
{
    int t,counter=0;
    cin>>t;
    int arr[t];
    int temp[t];
    for(int i=1;i<=t;i++)
    {
        cin>>arr[i];
    }
    if(t%2!=0)
        t = t-1;
    int k = 0;

    for(int j=t;j>=1;j--)
    {
        int l = t;
        while(l--){
        if(asearch(arr, l, t))
        {
            if(l%2==0 && arr[j]%2==0)
                k = l;

            if(l%2!=0 && arr[j]%2!=0)
                k = l;

             else
                continue;
        }
        cout<<k<<endl;
        if(arr[j+1] == '0'){
            if((arr[j] + l)%2==0)
                counter++;
        }
        }

    }
    cout<<counter<<endl;
    cout<<(t/2)-counter<<endl;

}
