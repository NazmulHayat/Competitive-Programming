#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n,counta=0,counter = 0, countb=0, diff=0, mod = 0;
    cin>>n;
    vector<char>y;
    char x[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
        if(x[i] == 'a')
            counta++;

        else countb++;
    }
    diff  = abs(counta-countb);
    mod = diff/2;
    for(int i=0;i<mod;i++)
    {
        if(counta > countb)
        {
            if(x[i] == 'a'){
                counter++;}
        }
        else if(counta < countb)
        {
            if(x[i] == 'b'){
                counter++;}
        }
    }
    cout<<counter<<endl;
    for(int j=0;j<n/2;j++)
    {
        cout<<"ab";
    }
}
