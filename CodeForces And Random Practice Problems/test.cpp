#include<bits/stdc++.h>
using namespace std;
bool isSquareFree(int n)
{
    if (n % 2 == 0)
       n = n/2;

    // If 2 again divides n, then n is
    // not a square free number.
    if (n % 2 == 0)
       return false;

    // n must be odd at this point.  So we can
    // skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // Check if i is a prime factor
        if (n % i == 0)
        {
           n = n/i;

           // If i again divides, then
           // n is not square free
           if (n % i == 0)
               return false;
        }
    }

    return true;
}
int main()
{
    int x;
    cin>>x;
    int temp = x;
    vector<int> v;
    for(int i = 2 ; i * i <= x ; i++)
    {
        if(x%i==0)
        {
            while(x%i==0)
                {
                    x /= i;
                }
            v.push_back(i);
        }
    }
    if(x != 1)
        v.push_back(x);
    int a,b;
    for(int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" h ";
    }
    cout<<endl;
    int c = 0;
    for(int i = 0; i < v.size(); i++)
    {
        if(isSquareFree(v[i] * v[i+1]))
            b = v[i] * v[i+1];
            c = max(b,c);
    }
    double y = ceil(temp/(c*c*c*1.0));
    a = sqrt(y);
    cout<<a<<endl<<c<<endl;
    if(a*a*c*c*c == temp)
        cout<<"True"<<endl;
    else
        cout<<"False"<<endl;

}

//unsolved powerful numbers
