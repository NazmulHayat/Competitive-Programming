#include<bits/stdc++.h>
using namespace std;




int main()
{
    int n,counter = 0, temp = 0;
    cin>>n;
    long long int arr[n];
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    long long int k=9999999;
    for(int j=n-1;j>=0;j--)
    {
        if(k<=arr[j])
        {
            if(j==n-1)
                k=0;

            counter++;
            k = k+arr[j];
            temp = j;
        }
        else
        {
            v.push_back(counter);
            counter=0;
            j = temp+1;
        }
    }
    for(int j=0;j<v.size();j++)
        cout<<v[j]<<endl;
}

