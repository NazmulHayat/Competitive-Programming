#include<bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin>>tc;
    for(int i=1 ; i <= tc ; i++){
        int length, k;
        int j = 0;
        cin>>length>>k;
        string s;
        cin>>s;
        vector<int> v;
        while(j!=length){
            if(s[j] == '0')
                v.push_back(j);
            j--;
        }
        int siz = 0, l = 0;
        while(k!=0)
        {
            int temp1 = v[l]-1;
            int temp2 = v[l] - temp1;
            s[temp2] = '0';
            s[v[l]] = '1';
            k -= temp1;
        }
        cout<<s<<endl;
    }
}
