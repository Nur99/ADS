
#include <bits/stdc++.h>
using namespace std;
int n, t, a[1001];
#define mp make_pair
set <pair <int, int> > s;
void solve(){
    
    s.insert(mp(a[1], 1));
    for(int i = 2; i <= n; i++){
        auto it = s.lower_bound(mp(a[i], 0));
        if(it==s.end()){
            s.insert(mp(a[i], s.size()+1));
        }
        else{
            int ind = it->second;
            s.erase(it);
            s.insert(mp(a[i], ind));
        }
    } 
    cout<<s.size()<<endl;
}
int main(){
    cin>>t;
    
    while(t--){
        cin>>n;
        if(!n){
            cout<<0<<endl;
            continue;
        }
        for(int i = 1; i <= n; i++)cin>>a[i];
        solve();
        s.clear();
    }
}
