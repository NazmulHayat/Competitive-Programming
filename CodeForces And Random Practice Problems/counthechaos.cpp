#include<iostream>
using namespace std;
int main()
{
    int x,counter=0;
    cin>>x;
    int arr[x];
    for(int i=0;i<x;i++)
    {
        cin>>arr[i];
    }
    if(x%2==0)
    {
        for(int i=0;i<x;i++)
        {
            if(arr[i]>arr[i+1])
                counter++;
        }
    }
    else {
        for(int i=0;i<x-1;i++)
        {
            if(arr[i]>arr[i+1])
                counter++;
        }
    }
    cout<<counter<<endl;
}
