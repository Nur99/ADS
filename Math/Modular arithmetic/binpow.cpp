#include <bits/stdc++.h>
using namespace std;

#define int long long

int binpow(int x, int y, int p){
    if(y == 0) return 1;
    if(y == 1) return x;
    if(y % 2 == 0)return ((binpow(x, y/2)%p) * (x%p))%p;
    else return binpow(x, y/2)%p;
}

int32_t main(){
    
    int x,y,p;
    cin>>x>>y>>p;
    
    cout<<binpow(x, y, p);
}
