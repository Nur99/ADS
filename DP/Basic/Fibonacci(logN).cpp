
/*
F(n+1)  Fn
Fn      F(n-1)

for n = 1;
F2      F1
F1      F0
We easily determine the matrix for first fib/i number, if we multiply it to itself n times, we can get (n+1)th Fibonacci number;
How works the program in logN time? 

For example we have 18;
pro/m divides it to 2 and gets 9, then 4, then 2.
We have the ready matrix for first fib/i number and we multiply it to itself and will get 2nd, 4th, then 8th;
We stop here and if number is indivisible by 2, then we multiply it to one and get 9th.
After that we divide 9*9 and get 18th.
*/
#include <bits/stdc++.h>
using namespace std;
void multiply(int F[2][2], int M[2][2])
{
  int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];
 
  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}
void power(int F[2][2], int n){
  if(n==1 || n==0)return;
  power(F, n/2);
  multiply(F, F);
  int M[2][2] = {{1, 1}, {1, 0}};  
  if(n%2 != 0)multiply(F, M);
}
int fib(int n){
  int F[2][2] = {{1, 1}, {1, 0}};
  if(n==0)return 0;
  if(n==1)return 1;
  power(F, n-1);
  return F[0][0];
}
int main(){
  int n;
  cin>>n;
  cout<<fib(n);
}
