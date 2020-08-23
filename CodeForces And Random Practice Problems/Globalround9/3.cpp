#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0)

#define ll long long
#define vi vector<int>
#define vll vector<ll>

#define fr(i, a, b) for (int i=a; i<b; i++)
#define frd(i, a, b) for (int i=a-1; i>=b; i--)

#define pb(a) push_back(a)
#define ull  unsigned long long
#define gcd(a, b)  __gcd(a, b)
#define lcm(a, b)  ((a)*((b)/gcd(a,b)))

const int MOD = 1000000007;

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int r,c;
        cin>>r>>c;
        int arr[r][c], temp[r][c];
        bool flag=1;
        for(int i = 0 ; i < r ; i++)
        {
            for(int j = 0 ; j < c ; j++)
                {
                    cin>>arr[i][j];
                    if((i==0 && (j == 0 || j==c-1)) || (i==r-1 && (j == 0 || j==c-1)))temp[i][j]=2;

                    else if((i==0 && j > 0) || (i==r-1 && j > 0))
                        temp[i][j]=3;

                    else if((i>0 && i<r-1) && (j==0 || j==c-1))
                        temp[i][j]=3;

                    else
                        temp[i][j]=4;
                    if(arr[i][j] > temp[i][j]) flag=0;
                }

        }

        if(!flag)
           cout<<"No"<<endl;
        else{
            cout<<"Yes"<<endl;
            for(int i = 0 ; i < r ; i++)
            {
                for(int j = 0 ; j < c ; j++)
                    cout<<temp[i][j]<<" ";
                cout<<endl;
            }
        }
    }
    return 0;
}

