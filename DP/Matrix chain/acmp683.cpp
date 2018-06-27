#include <bits/stdc++.h>
using namespace std;
int n, a[101], dp[101][101];
int main(){
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        cin>>a[i];
        for(int j = 1; j <= n; j++){
            dp[i][j] = INT_MAX;   
        }
        dp[i][i] = 0;
    }
    
    for(int l = 1; l < n; l++){
        for(int i = 1; i <= n; i++){
            int j = i+l;
            if(j>=n)continue;
            for(int k = i; k < j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k+1][j]+a[k+1]*(a[i]+a[j+1]));
            }
        }
    }
    cout<<dp[1][n-1];
}
