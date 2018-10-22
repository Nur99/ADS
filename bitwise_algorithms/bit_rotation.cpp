#include <bits/stdc++.h>
using namespace std;

int left(int n, int d){
    return ((n << d) | (n >> 32-d));
}

int right(int n, int d){
    return ((n >> d) | (n << 32-d));
}

int main(){
    int t;
    cin >> t;
    
    
    while(t--){
        int d;
        cin>>d;
        cout<<left(n, d)<<endl;
        cout<<right(n, d)<<endl;
    }
}
