/*
Given n friends, each one can remain single or can be paired up with some other friend. Each friend can be paired only once. 
Find out the total number of ways in which friends can remain single or can be paired up.

It is obvous that one part of current index's value is it's previous index's value. It is that case when it's previous index stays at last.
But there are other cases when other numbers stay at last. It is equal to dp[i-2]*(i-1);
*/

#include <bits/stdc++.h>
using namespace std;
int dp[101];
int main(){
  int n;
  cin>>n;
  
  dp[1] = 1, dp[2] = 2;
  
  for(int i = 3; i <= n; i++)dp[i] = dp[i-1]+dp[i-2]*(i-1);
  
  cout<<dp[n];
}
