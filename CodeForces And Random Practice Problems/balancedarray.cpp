#include<bits/stdc++.h>
using namespace std;

void print(vector<auto> const &input)
{
	for (int i = 0; i < input.size(); i++) {
		std::cout << input.at(i) << ' ';
	}
}


int main(){
    int tc,t;
    cin>>tc;
    while(tc--){
        int sum,n;
        cin>>n;
        t = n/2;

        sum = t*(t+1);
        vector<int> even;
        vector<int> odd;


        if(sum % 2 == 0 && t % 2 != 0)
            cout<<"NO";
        else{
            cout<<"YES"<<endl;
            int j = 2, os = 0;
            for(int  i = 1; i <= t; i++){
                even.push_back(j);
                if(i == t){
;                   odd.push_back(sum - os);
                }
                else{
                    odd.push_back(j-1);
                    os += j-1;
                }
                j+=2;
            }
        }
        print(even);

        print(odd);
        cout<<endl;
    }
}
