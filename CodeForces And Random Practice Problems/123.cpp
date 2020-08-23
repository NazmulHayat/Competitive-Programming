#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    int counter=0;
    for(int i=0;i<tc;i++)
        {
            int n;
            cin>>n;
            int t = n;
            char s[n];
            scanf("%s", s);
            int temp = n;
            int j=0;
            int maximum = 0;
            while(j!=tc){
                if(s[j] == 'A')
                    break;
                j++;
            }
            j++;
            for(int k=j;k<t;k++)
            {
                if(s[k] == 'P')
                    {
                        counter++;

                    }

                if(s[k]=='A' || k == n-1)
                    {
                        if(counter >= maximum)
                            {
                                maximum = counter;

                            }
                        else
                            {
                                maximum = maximum;
                            }
                        counter=0;
                    }
            }
                cout<<maximum<<endl;
                counter=0;
                maximum = 0;
        }

}

