#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back

int main(){        
	ios_base::sync_with_stdio(0);

	int n;
	cin >> n;

	set <int> s;
	vector <pair <int, int> >a(n);

	for(int i = 0; i < n; i++){
	 	cin >> a[i].first>>a[i].second;
	}
                                 
   sort(a.begin(), a.end());


   for(int i = 1; i < n; i++){
   	s.insert(a[i].first);
   }

   int ans = 1, l = a[0].first;

   for(int i = 1; i < n; i++){
    	s.erase(s.begin());
    	if(l+a[i].second+1 <= a[i].first)ans++, l = a[i].first;
    	else if(i == n-1)ans++;
    	else {
    	   int r = a[i].first + a[i].second;
    	   if(s.upper_bound(r) == s.begin()){
    	    	l = r;
    	    	ans++;
    	   }
    	   else{
    	    	l = a[i].first;
    	   }
    	}
   }
   cout<<ans;
}
