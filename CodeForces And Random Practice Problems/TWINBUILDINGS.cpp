#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0;
    cin>>n;
    vector<double>temp1;
    vector<double>temp2;
    double max1,max2;
    double len[n], width[n];
    for(int i=0;i<n;i++)
    {
        cin>>len[i]>>width[i];
        if(len[i] == width[i])
        {
            counter++;
        }
        double x = len[i]/2 * width[i];
        temp1.push_back(x);
        temp2.push_back(width[i]*len[i]);
    }

    max1 = *max_element(temp1.begin(), temp1.end());
    max2 = *max_element(temp2.begin(), temp2.end());
    if(counter==0)
        cout<<fixed<<setprecision(1)<<max(max1,max2)<<endl;

    else cout<<fixed<<setprecision(1)<<max1<<endl;

}
