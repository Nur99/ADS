#include <bits/stdc++.h>
using namespace std;

/*
some theorem about code

A^B^C % M

res = B^C

A^(p-1) = 1

B^C = X*(M-1) + Y;

Y = B^C % (M-1)

A^(B^C % M-1) % M 

*/
int pow(int a, int b, int m){
    if(b == 0)return 1;
    if(b == 1)return a%m;
    
    int half = pow(a, b/2, m);
    
    if(b%2 == 1)(half*a)%m;
    
    return (half*half)%m;
}
int find(int a, int b, int c){
    int res = pow(b, c, m-1);
    
    int ans = pow(a, res, m);
    cout<<ans;
}
int main(){
    int a, b, c, m;
    cin>>a>>b>>c>>m;
    
    find(a, b, c, m);
    
}
