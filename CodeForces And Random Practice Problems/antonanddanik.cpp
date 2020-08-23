#include<iostream>
#include<string>
using namespace std;

int main()
{
    int tc, counterD=0, counterA=0;
    cin>>tc;
    char s[tc];
    for(int i=0;i<tc;i++)
    {
        cin>>s[i];
    }
    for(int i=0;i<tc;i++)
    {
        if(s[i] == 'D')
            counterD++;

        else counterA++;
    }
    if(counterA==counterD)
        cout<<"Friendship"<<endl;

    else if(counterA>counterD)
    {
        cout<<"Anton"<<endl;
    }
    else cout<<"Danik"<<endl;

}
