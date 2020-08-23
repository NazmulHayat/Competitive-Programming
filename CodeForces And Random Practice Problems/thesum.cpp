#include<bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if(n==1)
        return 1;

    else if(n==0)
        return 1;

    else return fib(n-2)+fib(n-1);
}
int main()
{
    int x;
    cin>>x;
    cout<<fib(x+1)-1<<endl;
}

