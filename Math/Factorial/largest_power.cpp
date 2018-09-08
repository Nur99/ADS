/*
Given an integer n and a prime number p, find the largest x such that px (p raised to power x) divides n! (factorial)
*/

#include <iostream>
using namespace std;
int main(){
  int n, p;
  cin>>n>>p;
  
  int ans = 0;
  for(int i = p; i <= n; i+=p){
    int b = i;
    while(b%p == 0){
      ans++;
      b /= p;
    }
  }
  cout<<ans;

}
