
//What do u mean that I submitted EXACTLY the same code WTHHHH!!!!

#include<bits/stdc++.h>
using namespace std;

void minimum(int n)
{
    if(n-((n/7)*7)>5)
    {
        int res = 1 + 2*(n/7);
        cout<<res<<" ";
    }
    else cout<<2*(n/7)<<" ";
}

void maximum(int t)
{
    int counter=0;
    if(t-((t/7)*7)>=2)
    {
        int res = 2 + 2*(t/7);
        cout<<res<<endl;
    }
    else if(t-((t/7)*7)==1)
    {
        int res = 1 + 2*(t/7);
        cout<<res<<endl;
    }
    else
        cout<<2*(t/7)<<endl;
}

int main()
{
    int x;
    cin>>x;
    if(x>=7)
    {
        minimum(x);
        maximum(x);
        return 0;
    }
    else if(x >= 6 && x < 7)
        {
            cout<<1<<" "<<2<<endl;
            return 0;
        }

    else if(x >= 2 && x <= 5)
        {
            cout<<0<<" "<<2<<endl;
            return 0;
        }
    else
        cout<<0<<" "<<x<<endl;
}
