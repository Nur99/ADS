/*
Problem in codeforces is written wrongly in russian version
*/

#include <bits/stdc++.h>
using namespace std;
int n,m;
set <int> v[3001];
bool used[3001];
int dfs(int x, int y, int ans){
    used[x] = 1;
    if(x == y)return ans;
    int temp = INT_MAX;
    for(auto i:v[x]){
        if(!used[i])temp = min(dfs(i, y, ans+1), temp);   
    }
    return temp;
}

map <pair <int, int>, bool> mm;

bool dfs2(int x, int y){
    used[x] = 1;
    
    if(x == y){
        return 1;   
    }
    
    for(auto i:v[x]){
        if(!used[i]){
            return mm[make_pair(x, y)] = dfs2(i, y);   
        }
    }
    return 0;
}

int main(){
    cin >>n >>m;
    for(int i = 1; i <= m; i++){
        int x, y;
        cin >>x >>y;
        v[x].insert(y);
        v[y].insert(x);
    }
    
    int x, y, z, x2, y2, z2;
    cin>>x>>y>>z>>x2>>y2>>z2;
    
    if(dfs(x, y, 0) > z)cout<<-1, exit(0);
    memset(used, 0, sizeof(used));
    if(dfs(x2, y2, 0) > z2)cout<<-1, exit(0);
    memset(used, 0, sizeof(used));
    
    dfs2(x,y);
    memset(used, 0, sizeof(used));
    dfs2(x2, y2);
    cout<<m - mm.size();
}
