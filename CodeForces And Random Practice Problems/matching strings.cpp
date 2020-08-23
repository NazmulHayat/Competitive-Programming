#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    bool flag = false;
    int counter = 0;
    for(int i = 0 ; i < a.length() ; i++)
    {
        if(a[i] == b[0])
            {
                flag = true;
            }

        int j = 0, y = 0, k = i;

        while(flag != false)
        {
            if(j==b.length() and k == a.length())
               {
                 flag = false;
                 break;
               }

            if(a[k]!=b[j])
                {
                    flag = false;
                    break;
                }

            else if(a[k] == b[j])
                {
                    flag = true;
                    y++;
                    j++;
                    k++;
                }

        }
        if(flag == false && y == b.length())
        {
            counter++;
            i = k-1;
        }

    }
    if(counter==1)cout<<"Yes the inputs matched."<<endl;
    else
        cout<<"Yes the inputs matched."<<endl;
}
