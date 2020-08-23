#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i=1,counter=0,j=2, total = 1;
    while(total<=n){
        i+=j;
        total += i;
        counter++;
        j++;
    }
    cout<<counter<<endl;
}
