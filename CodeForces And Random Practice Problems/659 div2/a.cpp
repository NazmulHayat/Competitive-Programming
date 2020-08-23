#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin>>t;
    for(int i = 0 ; i < t ; i++){
        int n;
        cin>>n;
        int arr[n];
        vector<string> v;
        string s(51, 'a');
        int mn=INT_MAX, mx=-1;
        for(int j = 0 ; j < n ; j ++){
            cin>>arr[j];
        }
        cout<<s<<endl;
        for(int i = 0 ; i < n ; i++){
            bool flag=0;
            if(s[arr[i]] == 'b') s[arr[i]] = 'c';
            else s[arr[i]] = 'b';
            cout<<s<<endl;
        }

    }
}
