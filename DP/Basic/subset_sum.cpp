/*
It is easy task. 
Time complexity: O(sum * n);
Memory: O(sum*n), but we can optimize it until O(sum*2) keeping just previous and current line;
3 
3 4 7 

11 is sum of subset;
10 is not sum of subset;
*/

#include <bits/stdc++.h>
using namespace std;
bool dp[51][10001];
int a[51], n, sum;
bool good(){
  //if sum = 0;
  for(int i = 0; i <= n; i++)dp[i][0] = 1;
 
  for(int i = 1; i <= n; i++){
    for(int j = 1; j <= sum; j++){
      if(j<a[i])dp[i][j] = dp[i-1][j];
      else dp[i][j] = dp[i-1][j] | dp[i-1][j-a[i]];
    }
  }

  return dp[n][sum];
}
int main(){
  cin>>n;
  
  for(int i = 1; i <= n; i++)cin>>a[i];

    cin>>sum;
  if(good())cout<<"Good array!";
  else cout<<"Bad array!";
}
