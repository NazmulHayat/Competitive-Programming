#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cpul, memoryl;
    int di,cl,ml;
    int countercle = 0, countermle = 0, counterwa = 0, counterac = 0;
    cin>>n>>cpul>>memoryl;
    for(int i=1;i<=n;i++)
    {
        cin>>di>>cl>>ml;
        if(cl>cpul && ml>memoryl)
        {
            countercle++;
        }
        else if(cl<cpul && ml>memoryl)
            countermle++;

        else if(cl>cpul && ml<memoryl)
            countercle++;

        else if(di>0)
            counterwa++;

        else
            counterac++;
    }
    if(countercle>0)
    {
        cout<<"CLE";
        return 0;
    }

    else if(countermle>0){
        cout<<"MLE";
        return 0;
    }
     else if(counterwa>0){
        cout<<"WA";
        return 0;
    }
    else {
        cout<<"AC";
        return 0;
        }
}
