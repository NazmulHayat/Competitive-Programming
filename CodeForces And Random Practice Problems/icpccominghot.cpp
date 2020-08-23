#include<bits/stdc++.h>
using namespace std;
int main()
{
    int counter=0,place=0,hi=0;
    vector<int> tempo;
    vector<int> temps;
    int t = -1;
    string s;
    cin>>s;
    sort(s.begin(), s.end());
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == s[i+1])
        {
            counter++;
        }
        else {
            temps.push_back(i-t);
            tempo.push_back(i);
            t = i;
            counter = 0;
        }
    }
    int max = *max_element(temps.begin(), temps.end());
    for(int j=0;j<temps.size();j++)
    {
        if(max == temps[j])
        {
            place = j;
            break;
        }
    }
    int a = tempo[place];
    cout<<s[a]<<endl;
}
