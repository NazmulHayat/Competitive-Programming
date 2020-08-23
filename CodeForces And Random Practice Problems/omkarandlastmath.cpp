    #include<bits/stdc++.h>
    using namespace std;

    int f(long long int n)
    {
        for(int i = 3 ; i <= sqrt(n) ; i+=2)
        {
            if(n%i==0)
                return i;
        }
        return n;
    }
    int main()
    {
        int t;
        cin>>t;
        while(t--){
            long long n;
            cin>>n;
            if(n%2==0){
                cout<<n/2<<" "<<n/2<<endl;
                continue;
            }
            long long m = f(n);
            if(m==n)
                cout<<1<<" "<<m-1<<endl;
            else
                cout<<m<<" "<<n-m<<endl;
        }
    }
