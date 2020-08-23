#include<bits/stdc++.h>
using namespace std;

void addthemall(vector<int> arr[],int n)
{
    int temp,counter=0;
    int j=0;
    for(int i=0;i<n;i++)
    {
        temp = arr[j];
        arr.erase(arr.begin()+j);
        if(temp<50)
        {
            for(int k=0;k<n;k++)
            {
                if(temp+arr[k]>=50)
                {
                    counter++;
                    break;
                    arr.erase(arr.begin()+k);
                }
            }
        }
        else counter++;
        arr.erase(arr.begin()+i);
        j++;
    }
    cout<<counter<<endl;
}

int main()
{
    int t,n;
    cin>>t;

    while(t--){
        cin>>n;
        vector<int> arr[n];
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            arr[i].push_back(a[i]);
        }
        sort(arr.begin(), arr.end());
            int temp,counter=0;
        int j=0;
        for(int i=0;i<n;i++)
        {
            temp = arr[j];
            arr.erase(arr.begin()+j);
            if(temp<50)
            {
                for(int k=0;k<n;k++)
                {
                    if(temp+arr[k]>=50)
                    {
                        counter++;
                        break;
                        arr.erase(arr.begin()+k);
                    }
                }
            }
            else counter++;
            arr.erase(arr.begin()+i);
            j++;
        }
        cout<<counter<<endl;

    }
}
