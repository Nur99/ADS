#include <bits/stdc++.h>
using namespace std;

#define maxn 100100

int sfe[maxn];

void sieve(){
    for(int i = 1; i <= 100000; i++)sfe[i] = i;
    for(int i = 2; i < maxn; i++){
        if(sfe[i] == i){
            for(int j = i*i; j < maxn; j += i){
                if(sfe[j] == j)sfe[j] = i;   
            }
        }
    }
}

int main(){
    sieve();
    
    int n;
    cin>>n;
    
    while(n != 1){
        if(n == sfe[n])cout<<n, break;
        cout<<sfe[n]<<' ';
        n /= sfe[n];
    }
}
