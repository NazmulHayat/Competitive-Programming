#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    for(int i = 0 ; i < tc; i++){
        int len, swaps;
        cin>>len>>swaps;
        int a[len+1], b[len+1];
        for(int j = 0 ; j < len ; j++){
            cin >>a[j];
        }
        for(int j = 0 ; j < len ; j++){
            cin >>b[j];
        }
        sort(a, a+len, greater<int>());
        sort(b, b+len,greater<int>());

        int place = len - swaps;
        int temp;
        for(int j = place ; j < swaps ; j++){
           for(int k = 0 ; k < len ; k++){
            cout<<place;
            if(b[j] > a[place]){
                a[place] = b[k];
                break;
            }
           }
        }
        cout<<endl;
        int sum = 0;
        for(int j = 0 ; j < len ; j++){
            cout<<a[j];
            sum += a[j];
        }
        cout<<sum<<endl;
    }
}
