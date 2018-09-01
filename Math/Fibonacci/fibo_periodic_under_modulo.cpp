#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main(){
    int n, m;
    
    cin>>n>>m;
    
    //n'th multiple of m
    
    int a = 0, b = 1, c = 1;
    for(int i = 3; i <= 1000; i++){
        c = a + b;
        a = b;
        b = c;
        if(c % m == 0)cout<<n*i, exit(0);
    }
    
    
}
