#include <bits/stdc++.h>
using namespace std;
int prime[100100];
int main(){
  for(int i = 0; i <= 100000; i++)prime[i] = 1;
  
  prime[0] = prime[1] = 0;
  for(int i = 2; i <= 100000; i++){
    if(prime[i]){
      for(int j = i*2; j <= 100000; j+=i){
        prime[j] = 0;
      }
    }
  }

}
