#include<bits/stdc++.h>
#include<string>
using namespace std;
 int main()
 {
     int k=0,c=0;
     int x,counter=0;
     cin>>x;
     string s;
     stringstream ss1;
     ss1 << x;
     string str1 = ss1.str();
     for( k=0;k<str1.length();k++)
     {
         if(str1[k] == '4' || str1[k] == '7')
            c++;
         else c--;
     }
     if(c==str1.length()-1)
     {
         cout<<"YES"<<endl;
         return 0;
     }
     else{
     for(int i=1;i<=x;i++)
     {
        stringstream ss;
        ss << i;
        string str = ss.str();

        for(int j=0;j<str.length();j++)
        {
            if(str[j] == '4' || str[j] == '7')
            {

                if((x/i)%2==0)
                    counter++;
            }
        }

     }
     cout<<counter<<endl;
     if(counter>0)
        cout<<"YES"<<endl;
     else cout<<"NO"<<endl;
    }
 }
