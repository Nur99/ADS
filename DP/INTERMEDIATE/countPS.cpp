#include <bits/stdc++.h>
using namespace std;
int dp[31][31];
int main(){
    string s;
    cin>>s;

    s = ' ' + s;
    int n = s.size();

    for(int i = 1; i <= n; i++){
        dp[i][i] = 1;
        if(s[i]==s[i-1])dp[i-1][i] = 3;
        else dp[i-1][i] = 2;
    }
    
    for(int i = 2; i <= n; i++){
        for(int l = 1; l <= n; l++){
            int r = i + l;
            if(r > n)continue;
            if(s[l] == s[r]) dp[l][r] = 1 + dp[l+1][r] + dp[l][r-1];
            else dp[l][r] = dp[l+1][r] + dp[l][r-1] - dp[l+1][r-1];
        }
    }
    cout<<dp[1][n];
}
