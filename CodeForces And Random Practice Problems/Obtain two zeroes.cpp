#include<bits/stdc++.h>
using namespace std;

void theGuessedNumber(int a, int b){
    int x;
    bool flag = true;
    int i = 1;
        while(a!=0 && b!=0)
        {
            int temp1 = (b-i*2);
            int temp2 = (a-i);
            int temp3 = (a-i*2);
            int temp4 = (b-i);
            if((a == 0 && b != 0) || (b == 0 && a != 0))
            {
                cout<<"NO"<<endl;
                flag = false;
                break;
            }
            if(temp1 % temp2 == 0)
               {
                   a = temp2;
                   b = temp1;
               }
            else if(temp3 % temp4 == 0)
                {
                   a = temp3;
                   b = temp4;
                }
        }
        if(flag == true)
            cout<<"YES"<<endl;

}

int main()
{
    int tc,a,b;
    cin>>tc;
    while(tc--){
        cin>>a>>b;
        theGuessedNumber(a,b);
    }
}
