#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int count1=0,count11=0,count2=0,count22=0,count3=0,count33=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '(')
            count1++;
        else if(s[i] == ')')
            count11++;
        else if(s[i] == '[')
            count2++;
        else if(s[i] == ']')
            count22++;
        else if(s[i] == '{')
            count3++;
        else if(s[i] == '}')
            count33++;

    }
    if(count1==count11 && count2==count22 && count3==count33)
    {
        cout<<"Yes"<<endl;
    }
    else cout<<"No"<<endl;
}
