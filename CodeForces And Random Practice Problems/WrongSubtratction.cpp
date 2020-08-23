#include <bits/stdc++.h>
using namespace std;
int lastdigit(int x)
{
    return (x%10);
}

int main()
{
    int t,num;
    cin>>num;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        if(lastdigit(num) == 0)
        {
            num = num/10;
        }
        else if(lastdigit(num) != 0)
        {
            num  = num - 1;
        }
        else num = num;
    }
    cout<<num<<endl;
}
