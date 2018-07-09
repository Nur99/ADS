/*
dp[0][0] = 1;
1
	dp[1][0] = dp[0][0] + dp[0][1]
	dp[1][1] = dp[0][1] + dp[0][0]
	dp[1][2] = dp[0][2] + dp[0][3]
	dp[1][3] = dp[0][3] + dp[0][2]
	dp[1][4] = dp[0][4] + dp[0][5]
	dp[1][5] = dp[0][5] + dp[0][4]
	dp[1][6] = dp[0][6] + dp[0][7]
	dp[1][7] = dp[0][7] + dp[0][6]

2
.....
3
.....
4
.....
5
	dp[5][0] = dp[4][0] + dp[4][5]
	dp[5][1] = dp[4][1] + dp[4][4]
  .....
  dp[5][7] = dp[4][7] + dp[4][2]
*/
#include <bits/stdc++.h>
using namespace std;
int n, k, dp[21][127], a[21], m, ma = -1;
int main(){
    cin>>n>>k;

    for(int i = 1; i <= n; i++)cin>>a[i], ma = max(a[i], ma);

    dp[0][0] = 1;
    m = (1 << (int)(log2(ma) + 1) ) - 1;

    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= m; j++){
            dp[i][j] = dp[i-1][j] + dp[i-1][j^a[i]];
            printf("dp[%d][%d] = dp[%d][%d] + dp[%d][%d]\n", i, j, i-1, j, i-1. j^a[i]);
        }
        cout<<endl;
    }
    cout<<dp[n][k];
}
