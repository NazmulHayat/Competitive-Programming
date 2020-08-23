#include <bits/stdc++.h>
using namespace std;

void sortString(string &str)
{
   sort(str.begin(), str.end());
   cout<<str<<endl;
}


int main()
{
    int counter=0;
    string s,length,arr[10];
    cin>>s;
    sortString(s);
    for(int i=0;i<s.length();i++)
    {

        if(s[i]=='B')
        {
            counter++;
            arr[0]='B';

        }
        if(s[i]=='u')
        {
            counter++;
            arr[1]='u';
        }
        if(s[i]=='l')
        {
            counter++;
            arr[2]='l';
        }
        if(s[i]=='b')
        {
            counter++;
            arr[3]='b';
        }
        if(s[i]=='a')
        {
            counter++;
            arr[4]='a';
        }
        if(s[i]=='s')
        {
            counter++;
            arr[5]='s';

        }
        if(s[i]=='a')
        {
            counter++;
            arr[6]='a';
        }
        if(s[i]=='u')
        {
            counter++;
            arr[7]='u';
        }
        if(s[i]=='r')
        {
            counter++;
            arr[8]='r';
        }


    }
    for(int j=0;j<9;j++)
    cout<<arr[j];

    cout<<endl<<counter;

}
