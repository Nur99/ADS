#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define int ll
#define mod 1000000007
int dp[1002][1002], t, n, m;
int32_t main(){
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i = 1; i <= n; i++)for(int j = 0; j <= m; j++)dp[i][j] = 0;
        string s;
        cin>>s;
        s = ' ' + s;
        for(int i = 1; i <= n; i++){
            int c = s[i] - '0';
            dp[i][c%m]++;
            dp[i][c%m] %= mod;
            for(int j = 0; j < m; j++){
               dp[i][j] += dp[i-1][j];
               dp[i][j] %= mod; 
               dp[i][(j*10+c)%m] += dp[i-1][j];
               dp[i][(j*10+c)%m] %= mod;
            }
        }
        cout<<dp[n][0]<<endl;
    }
}
