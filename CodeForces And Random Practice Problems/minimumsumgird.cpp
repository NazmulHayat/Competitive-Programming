#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<ll>
#define vpll vector<pair<ll,ll>>
#define mp make_pair
#define pb push_back

int main(){
    int t;
    cin>>t;
    while(t--){
        ll R,C;
        cout<<"Input the size of the table (row) (col): ";
        cin>>R>>C;
        ll grid[R][C], dp[R][C];
        vpll moves;
        string area[R][C];
        cout<<"Input the Area in Table Format: "<<endl<<endl;;
        for(ll i = 0 ; i < R ; i++){
            for(ll j = 0 ; j < C ; j++){
                cin>>area[i][j];
            }
        }
        cout<<endl<<"Input the Cost to travel each area from its parent in Table Format: "<<endl<<endl;
        for(ll i = 0 ; i < R ; i++){
            for(ll j = 0 ; j < C ; j++){
                cin>>grid[i][j];
                dp[i][j] = INT_MAX;
            }
        }
        dp[0][0] = grid[0][0];
        for(ll i = 0 ; i < R ; i++){
            for(ll j = 0 ; j < C ; j++){
                 if(j-1 >= 0)
                    dp[i][j] = min(dp[i][j], dp[i][j-1]);

                 if(i-1 >= 0)
                    dp[i][j] = min(dp[i][j], dp[i-1][j]);

                 if(i==0 && j==0)continue;

                 else
                    dp[i][j] += grid[i][j];
            }
        }
        cout<<endl;
        ll i = R-1, j = C-1;
        moves.pb(mp(R-1,C-1));
        while(i!=0){
            while(j!=0){
                if(dp[i-1][j] <= dp[i][j-1]){
                    moves.pb(mp(i-1,j));
                    i--;
                }
                else if(dp[i-1][j] >= dp[i][j-1]){
                    moves.pb(mp(i,j-1));
                    j--;
                }
            }
        }

        cout<<"Total Minimum Cost: "<<dp[R-1][C-1]<<endl<<endl;
        ll k = 0;
        reverse(moves.begin(), moves.end());
        cout<<"The Minimum cost Path from "<<area[0][0]<<" to "<<area[R-1][C-1]<<" is: "<<endl;
        for(auto it = moves.begin(); it != moves.end(); ++it)
            {
                cout << area[(*it).first][(*it).second];
                if(k!=moves.size()-1) cout<<" -> ";
                k++;
            }
            cout<<endl;
        }
}
////
//3 3
//A B C
//D E F
//G H I
//1 3 1
//1 5 1
//4 2 1
//
//Answer: 7
