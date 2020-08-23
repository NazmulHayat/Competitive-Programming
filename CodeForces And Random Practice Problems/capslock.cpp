#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int counter=0, allcounter = 0;
    bool flag = true;
    cin>>s;
    for(int i=1;i<s.length();i++)
    {
        if(s[i] >= 'A' && s[i]<= 'Z')
            counter++;
    }
    for(int j=0;j<s.length();j++)
    {
        if(s[j] >= 'A' && s[j]<= 'Z')
            allcounter++;
    }
    if(counter == s.length()-1)
    {
        putchar(toupper(s[0]));
        for(int i=1;i<s.length();i++)
            putchar(tolower(s[i]));
    }
    else if(allcounter = s.length())
    {
       for(int i=0;i<s.length();i++)
            putchar(tolower(s[i]));
    }




}
