#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a%b == 0)return b;
    return gcd(b, a%b);
}

int reduce(int a, string b){
    int mod = 0;
    
    for(int i = 0; i < b.size(); i++){
        mod = (mod * 10 + b[i] - '0')%a;        
    }
    return mod;
}

int main(){
    int a;
    string b;
    cin>>a>>b;
    
    int bb = reduce(a, b);
    cout<<gcd(max(a, bb), min(a, bb));
}
