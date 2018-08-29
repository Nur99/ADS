/*
k - imin-men imax-tyn arasyndagy sandarga bolinetin sandardyn sany. 
imin    imax  k
1   -   1:    12
2   -   2:    6
3   -   3:    4
4   -   4:    3
5   -   6:    2
7   -   12:   1
*/
#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, k, imin = 1, imax, ans;
int32_t main(){
    cin>>n;
    while(imin <= n){
        int k = n/imin;
        imax = n/k;
        ans += k * (imax  - imin + 1);
        imin = imax+1;
    }
    cout<<ans;    
}
