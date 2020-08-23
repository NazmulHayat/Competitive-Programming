#include<bits/stdc++.h>
using namespace std;

long long int m = 1000000007;

int power(int a, int b)
{
    long long int res=1;
    for(int i=1;i<=b;i++)
        res = (res*a) % m;

    return res;
}


int main()
{
    long long int y=0;
    long long int total=0;
    string s;
    cin>>s;
    int j=0;

    //converting oct to dec

    for(int i=s.length()-1;i>=0;i--)
    {
        int x = s[i] - 48;
        long long int p = (power(8,j));

        total += p*x;
        j++;
    }
    cout<<total<<endl;
    j=0;
    vector<char> V;
    long long int k = total, temp=0;
    long long int rem=0;


    //converting dec to hex

    while(k!=0)
    {
        temp = k;
        k = k/16;
        rem  = temp%16;
        if(rem==10)
            V.push_back('A');
        else if(rem==11)
            V.push_back('B');
        else if(rem==12)
            V.push_back('C');
        else if(rem==13)
            V.push_back('D');
        else if(rem==14)
            V.push_back('E');
        else if(rem==15)
            V.push_back('F');
        else{
            char c = rem + '0';
            V.push_back(c);
        }
    }
    for(int f=V.size()-1;f>=0;f--)
    {
        cout<<V[f];
    }

}
