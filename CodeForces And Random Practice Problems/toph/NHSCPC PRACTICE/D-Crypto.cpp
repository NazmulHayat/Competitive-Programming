#include<bits/stdc++.h>
using namespace std;

#define ll long long int
string longDivision(string number, int divisor)
{
    // As result can be very large store it in string
    string ans;

    // Find prefix of number that is larger
    // than divisor.
    int idx = 0;
    int temp = number[idx] - '0';
    while (temp < divisor)
        temp = temp * 10 + (number[++idx] - '0');

    // Repeatedly divide divisor with temp. After
    // every division, update temp to include one
    // more digit.
    while (number.size() > idx) {
        // Store result in answer i.e. temp / divisor
        ans += (temp / divisor) + '0';

        // Take next digit of number
        temp = (temp % divisor) * 10 + number[++idx] - '0';
    }

    // If divisor is greater than number
    if (ans.length() == 0)
        return "0";

    // else return ans
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    ll arr[n];
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    string s;
    int j=1,cnt=0,d=0,temp;
    while(q--){
        cin>>s;
        temp = stoi(s);
        for(int i = 0 ; i < n ; i++)
        {
            string div = longDivision(s, arr[i]);
            d = stoi(div);
            if(arr[i]*d == temp)
                cnt++;
        }
        cout<<"Query "<<j<<": "<<cnt<<endl;
        cnt=0,j++;
    }
}
