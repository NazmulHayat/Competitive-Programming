#include<bits/stdc++.h>
using namespace std;

int checkld(int n)
{
    int counter = 0;
    if((n/2) % 2 ==0 && (n/2/2) % 2 == 0)
        counter = 2;

    return counter;
}

int main()
{
    int n;
    cin>>n;
    int s;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>s;
        int emne = 0, counter = 0;
        while(s!=1)
        {
            emne = s+1;
            if(checkld(s)!=0)
            {
                s = s/2/2;
            }
            else if(checkld(emne)!=0){
                s = (s+1)/2/2;
            }
            else if(checkld(emne-2)!=0){
                s = (emne-2)/2/2;
            }
            else
                s = s/2;
            counter++;
        }
        cout<<counter<<endl;
    }
}
