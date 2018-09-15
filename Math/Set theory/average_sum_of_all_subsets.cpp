#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    double a[n];
    
    double sum = 0;
    for(int i = 0; i < n; i++)cin>>a[i], sum += a[i];
    
    double ans = ((1<<n)-1)*sum/(n*1.0);
    cout<<ans;
}
