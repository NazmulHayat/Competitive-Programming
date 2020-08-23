#include <bits/stdc++.h>
using namespace std;
int main()
{
    int counter=0,temp=0;
    string x;
    bool flag;
    int t;
    cin>>t;
    for(int g=1; g<=t; g++)
    {
        cin>>x;
        for(int i=0,j=x.length()-1; i<x.length(),j>0; i++,j--)
        {
            if(x[i] == x[j])
            {
                counter++;
            }
            else {cout<<"Case "<<g<<": wrong"<<endl;
            break;}
        }
            if(counter>2 && counter == 1)
                cout<<"Case "<<g<<": right"<<endl;


    }
}

