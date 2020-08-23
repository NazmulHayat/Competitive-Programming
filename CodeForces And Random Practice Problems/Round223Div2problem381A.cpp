#include<iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    int arra[x],input;
    for(int i=0;i<x;i++)
    {
        cin>>arra[i];
    }
    for(int j=0;j<x;j++)
    {
        if(arra[j]>arra[j+1])
        {
            arra[j]=arra[j+1];
        }
        for(int k=j;k<x;k++)
        {
            cout<<arra[k];
        }
    }


}
