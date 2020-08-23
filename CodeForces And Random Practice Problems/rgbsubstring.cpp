#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,b,counter=0,tempor;
    long long int a;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
       cin>>a>>b;
       int arr[a];
       int temp[a];
       for(long long int j=0;j<a;j++)
       {
           temp[0]=a;
           cin>>arr[j];
           if(arr[j]%2==1)
           {
               counter++;
               temp[j]=arr[j];
           }

       }

            if(counter>=b)
                {
                    cout<<"YES"<<endl;

                        int n = sizeof(temp)/sizeof(temp[0]);
                        sort(temp, temp+n);
                        for (int i = 0; i < b; ++i)
                            cout << temp[i] << " ";

                        cout<<endl;

                }
        else cout<<"NO"<<endl;

        counter=0;

    }
}
