#include <bits/stdc++.h>
using namespace std;
#define ll long long
//#define int ll
#define pb push_back
#define mp make_pair
#define maxn 200200

set <int> s[101];
bool used[101];


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

	queue <int> q;

	q.push(1);
	used[1] = 1;

	int level = 0;
	while(q.size()){
	 	
	 	int l = q.size();

	 	while(l--){
	 		int u = q.front();
	 		q.pop();
	 		cout<<level+1<<": "<<u<<endl;
	 	 	for(auto v: s[u]){
	 	 		if(!used[v]){
	 	 		 	q.push(v);
	 	 		 	used[v] = 1;
	 	 	 	}
	 	 	}
	 	}  level++;
	}

}

