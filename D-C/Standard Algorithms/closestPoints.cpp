#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

pair <int, int> px[100001], py[100001];
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
	for(int i = 1; i <= n; i++){
	   for(int j = i+1; j <= n; j++){
	    	if(p[j].first - p[i].first > d)break;
	    	d = min(d, dist(i, j));
	   }
	}
	return d;
}
float closestUtil(int l, int r, pair <int, int> py[]){
	if(r-l+1 <= 3) return brute(l, r); 	

	int m = (l+r)/2;
	int n = r-l+1;
	
	pair <int, int> pyl[n], pyr[n];
	
	int pi = 0, pj = 0;
	for(int i = l; i <= r; i++){
		if(p[i].x <= p[m].x)pyl[pi] = py[i], pi++;
		else pyr[pj] = py[i], pj++;
	}	
	
	float dl = closestUtil(l, m, pyl);
	float dr = closestUtil(m+1, r, pyr);
	float d = min(dl, dr);


	pair <int, int> strip[n+1];
	int j = 1;

	for(int i = l; i <= r; i++){
		if(abs(py[i].first - p[m].first) < d)strip[j] = py[i], j++; 	
	}
	return min(d, stripUtil(strip, j, d));
}
float closest(int n){
 	sort(px, px+n+1);
	sort(py, py+n+1);
 	return closestUtil(1, n, px, py);
}
int main(){
	int n;
 	cin>>n;

 	for(int i = 1; i <= n; i++){
 		int x, y;
 		cin>>x>>y;
 		px[i] = mp(x, y);
 		py[i] = mp(y, x);
	}
 	cout<<closest(n);
}
