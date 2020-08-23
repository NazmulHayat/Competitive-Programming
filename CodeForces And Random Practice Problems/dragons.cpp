#include<bits/stdc++.h>
using namespace std;
int main()
{
    int strength,n,bonustemp=0;
    cin>>strength>>n;
    vector<int> bonus;
    int b;
    int drag[n];
    vector<int> temp;
    for(int i=0;i<n;i++)
    {
        cin>>drag[i];
        cin>>b;
        bonus.push_back(b);
        temp.push_back(drag[i]+bonus[i]);
    }
    int s = sizeof(drag)/sizeof(drag[0]);
    sort(drag, drag+s);
    int j=0;
    int i=0;

    while(j!=n){
    for(int k=0;k<n;k++)
    {
        int sum = bonus[k] + drag[j];
        if(count(temp.begin(), temp.end(), sum))
        {
            bonustemp = bonus[k];
            temp.erase(bonus.begin() + 1, bonus.begin() + 3);
            break;
        }
        else i++;
    }
        if(strength>drag[j]){
            strength += bonustemp;
        }
        else{
            printf("NO\n");
            return 0;
        }
        j++;
        i=0;
    }
    cout<<"YES"<<endl;

}
