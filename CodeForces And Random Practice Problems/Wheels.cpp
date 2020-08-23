#include<bits/stdc++.h>
using namespace std;

double Median(int a[], int n)
{
    // Sorting the array
    sort(a, a+n);

    // checking for even case
    if (n % 2 != 0)
       return (double)a[n/2];

    return (double)(a[(n-1)/2] + a[n/2])/2.0;
}



int main()
{
    int n, m , k;
    vector<int> v;

    cin>>n>>m>>k;
    int arr[n],altk;
    altk = k;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    int median  = Median(arr, n);
    int counter = 0;
    int num;
    for(int j=0;j<n;j++)
    {
        if(arr[j] > median)
        {
            while(arr[j]!=median)
            {
                num  = 1;
                arr[j] = arr[j] - num;
                counter++;
            }
            v.push_back(counter);
        }
        else if(arr[j] < median)
        {
            counter=0;
            k=1;
            while(arr[j]!=median)
                {
                    if(counter==altk)
                        {
                            break;
                        }
                    else{
                        arr[j] = arr[j]+k;
                        counter++;
                    }
                    v.push_back(counter);
                }
        }
        else
            counter=0;

    }
    sort(v.begin(),v.end());
    int sum=0;
    for(int f=0;f<m;f++)
    {
        sum = v[f] + sum;
    }
    cout<<sum;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


}
