#include<bits/stdc++.h>
using namespace std;\

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char f1  = '(';
    char f2  = ')';
    char s1 = '[';
    char s2 = ']';
    char t1 = '{';
    char t2 = '}';
    int cnt1 = 0, cnt2 = 0, cnt3 = 0, cnt4 = 0, cnt5 = 0, cnt6 = 0;
    string s;
    cin>>s;
    for(int i = 0 ; i < s.length() ; i++)
    {
        if(s[i] == f1)
            cnt1++;
        else if(s[i] == f2)
            cnt2++;
        else if(s[i] == s1)
            cnt3++;
        else if(s[i] == s2)
            cnt4++;
        else if(s[i] == t1)
            cnt5++;
        else if(s[i] == t2)
            cnt6++;

    }
    cout<<cnt1<<endl<<cnt2<<endl<<cnt3<<endl<<cnt4<<endl<<cnt5<<endl<<cnt6<<endl;
    if(cnt1 == cnt2 && cnt3 == cnt4 && cnt5  == cnt6)
        printf("Yes\n");
    else
        printf("No\n");
}
