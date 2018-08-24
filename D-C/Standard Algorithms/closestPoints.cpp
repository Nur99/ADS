#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

pair <int, int> p[100001];
float dist(int i, int j){
	return sqrt(abs(p[i].first - p[j].second) + abs(p[i].first - p[j].second)); 	
}
float brute(int l, int r){
 	float ans = 1000000;

 	for(int i = l; i <= r; i++){
 	 	for(int j = i+1; j <= r; j++){
 	 	 	ans = min(ans, dist(i, j));
 	 	}
 	}
	return ans;
}
float stripUtil(pair <int, int> strip[], int n, float d){
	for(int i = 1; i < n; i++){
	   strip[i] = mp(strip[i].second, strip[i].first);
	}
	sort(strip, strip+n+1);
	for(int i = 1; i <= n; i++){
	   for(int j = i+1; j <= n; j++){
	    	if(p[j].first - p[i].first > d)break;
	    	d = min(d, dist(i, j));
	   }
	}
	return d;
}
float closestUtil(int l, int r){
	if(r-l+1 <= 3) return brute(l, r); 	

	int m = (l+r)/2;

	float dl = closestUtil(l, m);
	float dr = closestUtil(m+1, r);
	float d = min(dl, dr);


	int n = r-l+1;
	pair <int, int> strip[n+1];
	int j = 1;

	for(int i = l; i <= r; i++){
		if(abs(p[i].first - p[m].first) < d)strip[j] = p[i], j++; 	
	}
	return min(d, stripUtil(strip, j, d));
}
float closest(int n){
 	sort(p, p+n+1);
 	
 	return closestUtil(1, n);
}
int main(){
	int n;
 	cin>>n;

 	for(int i = 1; i <= n; i++){
 		int x, y;
 		cin>>x>>y;
 		p[i] = mp(x, y);
 	}

 	cout<<closest(n);
}
