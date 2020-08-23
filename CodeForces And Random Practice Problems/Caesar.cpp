#include <bits/stdc++.h>
#include<windows.h>
using namespace std;

int main() {
    string s;
    string ss;
    cin>>s;
    cin>>ss;
   int i=0,counter=0,actualcounter=0;
   int j=0,n=0;

   if(ss.length()==1)
   {
       for(int i=0;i<s.length();i++)
       {
           if(ss[0] == s[i])
            counter++;

       }
       cout<<counter<<endl;
   }



   else
   {
   while(n!=s.length()-1)
        {
            if(ss[i] == s[j])
               {
                 counter++;
                 i++;
                 j++;

                 cout<<counter<<endl;
               }

            else {
                counter = 0;
                i=0;
                j--;
                n--;
                cout<<"FUCK"<<endl;
                }

            if(counter==ss.length())
                {
                    actualcounter++;
                    counter=0;
                    i=0;
                }
        }
        cout<<actualcounter<<endl;
   }




}

