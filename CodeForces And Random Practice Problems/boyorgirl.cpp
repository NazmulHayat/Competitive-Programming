#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void sortString(string &str)
{
   sort(str.begin(), str.end());
}

int main()
{
    int temp=0,counter=0;
    string s;
    cin >> s;
    int len = s.length();
    sortString(s);

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == s[i+1])
            counter++;

    }

    if((len-counter)==0)
        cout<<"IGNORE HIM!"<<endl;
    else if((len-counter)%2==0)
        cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;

    return 0;
}
