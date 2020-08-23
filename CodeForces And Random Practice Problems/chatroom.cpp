#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int counter = 1;
    char lst[] = {'h','e','l','l','o'};
    int j = 0;
    for(int i=0;i<s.length();i++){
        if(lst[j] == s[i])
            j = j+1;
            counter++;}

    cout<<counter;
    if(counter == 4)
        cout<<"YES";
    else
        cout<<"NO";

}
