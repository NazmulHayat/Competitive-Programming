#include<iostream>
using namespace std;


unsigned long long factorial(int n)
{
    const unsigned int M = 1000000007;

    if(n==0) return 0;
    if(n==1) return 1;

    else return (factorial(n-1) + factorial(n-2))%1000000007;

}


int main()
{
    int x;
    cin>>x;
    cout<<factorial(x)<<endl;
}
