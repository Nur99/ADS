/*
given a number n, given a number prime number p;
Q: check whethere exists or not x whose square under modulo is equal to 1
(x*x)% p = 1


x^2 = n mod p 

if p is prime, p-1 and p+1 is also prime, so (p-1)/2 is an integer

x^(2 * (p-1)/2) = n ^((p-1)/2)
x^(p-1) = n ^ ((p-1)/2)

Suppose to Fermatt's Little theorem we can say that x^(p-1) = 1 mod p

it means n ^ ((p-1)/2) = 1, so we should check given to this exuation, answer will be that, yes or no
*/

#include <bits/stdc++.h>
using namespace std;

#define int long long
int pow(int x, int y, int p){
    if(y == 1)return x%p;
    
    int half = pow(x, y/2, p)%p;
    int cur = (half*half)%p;
    if(y%2 != 0)cur *= x;
    return cur%p;
}
int32_t main(){
    int n, p;
    cin>>n>>p;

    if(pow(n, (p-1)/2, p) == 1)cout<<"There exists X which satisfies the next equation: (x*x)%p = 1";
    else cout<<"does not exist";
    
}
