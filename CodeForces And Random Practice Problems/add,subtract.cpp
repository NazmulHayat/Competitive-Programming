#include<iostream>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i = 1 ; i <= tc ; i++)
    {
        int a,b;
        cin>>a>>b;
        if(a==b){
            cout<<'0'<<endl;
            continue;
        }
        int ab = abs(a-b);
        if(ab % 2 == 0 && a<b)
            cout<<'2'<<endl;
        else if(ab % 2 == 0 && a>b)
            cout<<'1'<<endl;
        else if(ab % 2 != 0 && a<b)
            cout<<'1'<<endl;
        else
            cout<<'2'<<endl;
    }
}
