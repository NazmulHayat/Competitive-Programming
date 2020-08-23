#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string ts;
    cin>>s;
    cin>>ts;
    int tempi = 0, counter=0;
    char firstletter = ts[0];
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == firstletter)
        {
            for(int j=0 ; j<ts.length(); j++)
            {
                if(ts[j] == s[i])
                {
                    counter++;
                    i++;
                }
                else {
                    break;
                }
            }
            if(counter%ts.length()==1)
                {
                    counter--;

                }
            i=i-1;
        }

    }

        cout<<counter/ts.length()<<endl;
}
