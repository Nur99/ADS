#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define int ll
#define pb push_back
#define mp make_pair
#define maxn 200200

set <int> s[101];
bool used[101];

void dfs(int u){
	used[u] = 1;
	cout<<u<<' ';
	for(auto v: s[u]){
		if(!used[v]){
		 	dfs(v);
	 	}
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	int n, m;

	cin>>n>>m;

	while(m--){
	 	int x, y;
	 	cin>>x>>y;

	 	s[x].insert(y);
	 	s[y].insert(x);
	}
                 
   dfs(1);


}

