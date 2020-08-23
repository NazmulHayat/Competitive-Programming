#include<bits/stdc++.h>
using namespace std;

void to_lower(char &s) {
	for (int i = 0; i < 1; i++)
		if (s >= 'A' &&  s<= 'Z')
			s = s + 32;
}

int main()
{
    string s,z;
    cin>>s>>z;
    int totals = 0, totalz = 0;

    for(int i=0;i<s.length();i++)
    {
      if(s[i]>='A' && s[i]<='Z')
        to_lower(s[i]);

      else if(z[i]>='A' && z[i]<='Z')
          to_lower(z[i]);

      totals = totals + s[i];
      totalz = totalz + z[i];

    }

        if(totals<totalz)
            cout<<-1<<endl;

        else if(totals>totalz)
            cout<<1<<endl;

        else cout<<0<<endl;
}
