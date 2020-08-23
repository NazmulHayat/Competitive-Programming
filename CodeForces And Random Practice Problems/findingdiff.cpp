#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    bool flag = false;
    int s = a.length();
    int j=0, pos[s];
    char ch1[s], ch2[s];
    for(int i = 0 ; i < s ; i++)
    {
        if(a[i] != b[i])
        {
            flag = false;
            ch1[j] = a[i];
            ch2[j] = b[i];
            pos[j] = i;
            j++;
        }
        else

            flag = true;
    }
    if(flag == true)
        cout<<"The Genes matched"<<endl;
    else
    {
        for(int i = 0 ; i < j ; i++)
        {
            cout<<"Position where it didn't match: "<<pos[i]<<endl;
            cout<<"The difference: ";
            cout<<"Gene1--> "<<ch1[i]<<endl;
            cout<<"                Gene2--> "<<ch2[i]<<endl;
        }
    }
}
