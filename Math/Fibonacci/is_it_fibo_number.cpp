#include <bits/stdc++.h>
using namespace std;
bool perfectSquare(int a){
  int sq = sqrt(a);
  if(sq * sq == a)return 1;
  return 0;
}
bool fibo(int i){
  if(perfectSquare(5*i*i-4) || perfectSquare(5*i*i+4))return 1;
  return 0;
}
int main(){
  int n;
  cin>>n;
  
  
  int a[n];
  
  for(int i = 0; i < n; i++)cin>>a[i];
  
  for(int i = 0; i < n; i++){
    if(fibo(a[i]))cout<<a[i]<<' ';
  }
}
