#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc,counter=0,i=0;
    cin>>tc;
    string checker[tc],arr[tc];
    for(int i=0;i<tc;i++)
    {
        cin>>arr[i];
    }

    while(i!=tc){
        if(arr[i]==arr[i+1])
        {
            i++;
        }
        else {
                counter++;
                i++;
                }
    }
    cout<<counter<<endl;


}
