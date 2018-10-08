#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define int ll
#define pb push_back
#define mp make_pair
#define maxn 200200

set <int> s[101];
int color[101];

void dfs(int u){
	color[u] = 2;

	for(auto v:s[u]){
	 	if(color[v] == 2)cout<<"YES", exit(0);
	 	if(!color[v]){
	 	   dfs(v);
	 	}
	}
	color[u] = 1;
}

int main(){
	ios_base::sync_with_stdio(0);
	int n, m;

	cin>>n>>m;

	while(m--){
	 	int x, y;
	 	cin>>x>>y;
	 	s[x].insert(y);
	}
   dfs(1);
   cout<<"NO";
}

