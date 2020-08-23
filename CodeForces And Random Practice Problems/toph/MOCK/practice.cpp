#include<bits/stdc++.h>
using namespace std;

#define ll long long
const unsigned int mod = 1000000007;
int lex(string x, string y){
    bool a=0,b=1;
        int l1=x.length(),l2=y.length();
        for(int i=0; i<(l1<l2?l1:l2); i++)
        {
            if(x[i]!=y[i])
                b=0;
            if(x[i]<y[i])
            {
                a=1;
                break;
            }
            if(x[i]>y[i])
                break;
        }
        if(!a && b&& (l1>l2))
            a=1;
        return a;
}
int main()
{
    string temp1 = "n";
    string temp2 = "na";
    if(lex(temp1, temp2)) cout<<temp1<<" sadasd"<<endl;
    else
        cout<<temp2<<endl;
}
