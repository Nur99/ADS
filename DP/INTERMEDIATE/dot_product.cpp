#include<bits/stdc++.h>
using namespace std;
long long int MaxDotProduct(int A[], int B[],
                            int m, int n)
{
    long long int dp[n+1][m+1];
    memset(dp, 0, sizeof(dp));
 
    for (int i=1; i<=n; i++)
        for (int j=i; j<=m; j++)
            dp[i][j] = max((dp[i-1][j-1] + (A[j-1]*B[i-1])), dp[i][j-1]);
    return dp[n][m] ;
}
int main()
{
  int t, m, n;
  cin>>t;
  
  while(t--){
    cin>>m>>n;
    int A[n], B[m];
    for(int i = 1; i <= m; i++)cin>>A[i];
    for(int j = 1; j <= n; j++)cin>>B[j];
    cout << MaxDotProduct(A, B, m, n)<<endl;
  }
}
