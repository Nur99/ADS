#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a%b == 0)return b;
    int m = a%b;
    return gcd(b, m);
}

int lcm(int a, int b){
    return a*b/gcd(a, b);
}

int main(){
    int a, b;
    cin>>a>>b;
    cout<<gcd(max(a, b), min(a,b));
    cout<<endl<<lcm(a,b);
}
