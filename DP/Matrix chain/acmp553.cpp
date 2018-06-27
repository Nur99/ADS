#include <bits/stdc++.h>
using namespace std;
int n, dp[101][101];
pair <int, int> a[101];
int main(){
    cin>>n;
    
    for(int i = 1; i <= n; i++){
        cin>>a[i].first>>a[i].second;
        for(int j = 1; j <= n; j++){
            dp[i][j] = INT_MAX;   
        }
        dp[i][i] = 0;
    }   
    
    
    for(int l = 1; l < n; l++){
        for(int i = 1; i <= n; i++){
            int j = i+l;
            if(j>n)continue;
            for(int k = i; k < j; k++){
                dp[i][j] = min(dp[i][j], dp[i][k]+dp[k+1][j]+a[i].first*a[j].second); 
            }
        }
    }
    cout<<dp[1][n];
}
