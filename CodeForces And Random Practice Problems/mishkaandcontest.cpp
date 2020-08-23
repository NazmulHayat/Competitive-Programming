#include<iostream>
using namespace std;
int main()
{
    int t,power;
    cin>>t>>power;
    int counter=0, arr[t];
    for(int i=1;i<=t;i++)
    {
        cin>>arr[i];
    }
    int j=1;
    int temp = t;
    bool flagt=1,flagj=1;
    if((temp%2!=0)){
    while(j!=t+1)
    {


        if(arr[t]>power && arr[j]>power)
            break;

        if(arr[j]<=power && flagj==1)
            {
                counter++;
                cout<<"HII"<<endl;}
        else
            flagt=0;

        if(arr[t]<=power && flagt==1)
            {
                counter++;
                cout<<"Hello"<<endl;}
        else
            flagj=0;

        j++;
        t--;
    }}
    else{
        while(j!=t)
        {


            if(arr[t]>power && arr[j]>power)
                break;

            if(arr[j]<=power && flagj==1)
                {
                    counter++;
                    cout<<"HII"<<endl;}
            else
                flagt=0;

            if(arr[t]<=power && flagt==1)
                {
                    counter++;
                    cout<<"Hello"<<endl;}
            else
                flagj=0;

            j++;
            t--;
        }}

    cout<<t<<endl<<j<<endl;
    cout<<counter<<endl;
}
