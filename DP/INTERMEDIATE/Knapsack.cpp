#include <bits/stdc++.h>
using namespace std;
int n, w[101], v[101], dp[101][30001], W;
int main(){
  cin>>n>>W;

  for(int i = 1; i <= n; i++)cin>>w[i]>>v[i];

  for(int i = 1; i <= n; i++)
    for(int j = 1; j <= W; j++)
      if(w[i] <= j) dp[i][j] = max(dp[i][j], dp[i-1][j-w[i]] + v[i]);
      else dp[i][j] = dp[i-1][j];
  cout<<dp[n][w];
}
