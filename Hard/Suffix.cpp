#include <bits/stdc++.h>
using namespace std;
string s;
int a, b, ans = 0;
map <int, int> m;
int main(){
    ios_base::sync_with_stdio(0);
    int n;
    cin>>n>>s;
    m[0]++;
    for(int i = 0; i < n; i++){
        if(s[i] == 'a')a++;   
        else b++;
        ans += m[a-b];
        m[a-b]++;
    }
    cout<<ans; 
    return 0;   
}
