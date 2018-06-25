/*
Given a number n, find count of all binary sequences of length 2n such that sum of first n bits is same as sum of last n bits.
https://www.geeksforgeeks.org/count-even-length-binary-sequences-with-same-sum-of-first-and-second-half-bits/
*/

#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007
#define int long long int
int t, dp[1002][1002];
int32_t main(){
    dp[1][0] = dp[1][1] = 1;
    for(int i = 1; i <= 1000; i++){
        for(int j = 0; j <= 1000; j++){
            for(int k = 0; k < 2; k++){
                dp[i+1][j+k] += dp[i][j]%mod;                 
                dp[i+1][j+k] %= mod;
            }
        }
    }
    
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        for(int i = 0; i <= 1000; i++){
            int temp = (dp[n][i]%mod) * (dp[n][i]%mod);
            temp %= mod;
            ans += temp;
            ans %= mod;
        }
        cout<<ans<<endl;
    }
}
