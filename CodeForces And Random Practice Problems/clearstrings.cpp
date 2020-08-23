#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc, counter=0;
    char temp;
    cin>>tc;
    char a[tc];
    scanf("%s",a);
    int s = sizeof(a)/sizeof(a[0]);
    sort(a,a+s);
    printf("%s\n", a);
    int j=0,k=0;
    while(k!=tc)
    {
        if(a[k] != a[j]){
            j=k+1;
            cout<<"HI"<<endl;
            counter++;
            cout<<counter<<endl;
        }
        k++;
    }
    cout<<counter+1<<endl;
}

