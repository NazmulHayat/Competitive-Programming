#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc, largest=0,diff,num,index;
    cin>>tc;
    int arr[tc];
    vector<int> place;
    for(int i=0;i<tc;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<tc;i++)
    {
        for(int j=0;j<tc;j++)
        {
            if (find(place.begin(), place.end(), j)!=place.end())
                {
                    j++;
                    if(j==tc)
                    {
                        break;
                    }

                }
            diff=abs(arr[i] - arr[j]);
            if(diff>largest && diff!=0)
            {
                largest = diff;
                num = arr[j];
                index = j;
            }

        }
        cout<<num<<" ";
        largest=0;
        place.push_back(index);
        diff=0;
        num=0;

    }
}
