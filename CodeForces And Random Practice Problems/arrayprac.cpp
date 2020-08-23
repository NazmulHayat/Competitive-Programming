#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* vector<int> temp;
    int tc;
    cin>>tc;
    string t[tc];
    int mx = 0;
    for(int i = 0 ; i < tc ; i++)
    {
        cin>>t[i];
        if(t[i].length() > mx)
            mx = t[i].length();
    }
    mx = mx+1;
    for(int k = 0 ; k < tc ; k++)
    {
        for(int i = 0 ; i < ceil((mx - t[k].length())/2) ; i++)
            cout<<" ";

        if(t[k].length() % 2 == 0)
        {
            for(int i = 0 ; i < t[k].length()-1 ; i++)
                cout<<t[k][i];
        }
        else
            cout<<t[k];

        cout<<endl;
    }*/
    char arr[] = {'a','b','c','d','e'};
    for(int i = 0 ; i < 5; i++)
    {
        cout<<int(arr[i])<<endl;
        arr[i] = toupper(arr[i]);
       cout<<arr[i]<<endl;

    }
}

