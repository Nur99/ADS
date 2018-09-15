#include <bits/stdc++.h> 
using namespace std; 
  
long long findSumSubsets(int n) 
{ 
    return (n * (n + 1) / 2) * (1 << (n - 1)); 
} 
  
int main() 
{ 
    int n = 3; 
    cout << findSumSubsets(n); 
    return 0; 
} 
