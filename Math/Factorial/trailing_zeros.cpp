
/*

For an integer n find number of trailing zeroes in n! . 


We can assume that 0 can be transformed with help of two prime numbers: 2 and 5, any other number cannot make 10, they just transform numbers behind zeros.

so, maximum number of n is 1000;

in 1000!, we have 2^1013 * 5^249 * (other collection of prime numbers).
We don't worry about other collection of prime numbers, because they cannot make new zeros.
we can write like that:
    2^1013 * 5^249 = (2^(1013-249)) * (2^249 * 5 ^249) = (2^(1013-249)) * 249 * 10;
    It means we have 249 zeros and other numbers (we will not worry about them).
    So answer is finding degrees of five.
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int d = 5, ans = 0;
    while(n >= d){
        ans += n/d;
        d *= 5;
    }
    cout<<ans;
}
