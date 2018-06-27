/*
AGGTAB
GXTXAYB

Output: GTAB

  if(N[i]==M[j]){
      dp[i][j] = dp[i-1][j-1] + 1;   
  }
  else{
      dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
  }

*/

#include <bits/stdc++.h>
using namespace std;

int t, dp[102][102], N[102], M[102], n, m;
void solve(){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(N[i]==M[j]){
                dp[i][j] = dp[i-1][j-1] + 1;   
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
}   
int main(){
    cin>>t;
    
    
    while(t--){
        cin>>n>>m;
        char c;
        for(int i = 1; i <= n; i++)cin>>c, N[i] = c-'A';
        for(int i = 1; i <= m; i++)cin>>c, M[i] = c-'A';
        
        solve();
        
        cout<<dp[n][m]<<endl;
        /*
        For printing the most longest subsequence
        int x = n, y = m;
        string s = "";
        while(dp[x][y]!=0){
            if(dp[x-1][y]==dp[x][y])x--;
            else if(dp[x][y-1]==dp[x][y])y--;
            else s += N[x]+'A', x--, y--;
        }
        reverse(s.begin(), s.end());
        cout<<s<<endl;
        */
    }
}
