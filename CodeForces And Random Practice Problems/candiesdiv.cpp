#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        int total, manush;
        cin>>total>>manush;
        int boro = manush/2;
        if(total%manush==0) cout<<total<<endl;

        else if(total%manush>=boro)
        {
            int tempa = (int)((total-boro)/manush);
            cout<<manush*tempa+boro<<endl;
        }
        else cout<<total<<endl;
    }
}
