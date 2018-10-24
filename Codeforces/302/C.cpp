#include <bits/stdc++.h>
using namespace std;
int dp[501][501], n, m, b, mod, c[501];
int add(int i, int j){
    return ((i%mod)+(j%mod))%mod;
}
int main(){
    cin >>n >>m >>b >>mod;
    
    for(int i = 1; i <= n; i++){
        cin >>c[i];
    }
    
    dp[0][0] = 1;
    for(int k = 1; k <= n; k++){
        for(int i = 1; i <= n; i++){
            for(int j = 0; j <= b; j++){
                if(j - c[k]){
                    dp[i][j] = add(dp[i][j] + dp[i-1][j-c[k]])%mod;   
                }
            }
        }
    }
    
    int ans = 0;
    for(int i = 0; i <= b; i++){
        ans += (dp[m][i]+ans)%mod;
    }
    cout<<ans<<endl;
}
