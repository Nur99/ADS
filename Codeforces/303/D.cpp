#include <bits/stdc++.h>
using namespace std;

#define mp make_pair
#define ll long long
#define pb push_back

int main(){        
	ios_base::sync_with_stdio(0);
	
	int n;
	cin >> n;

	int cur = 0, ans = 0;

	int a[n];
	for(int i = 0; i < n; i++)cin>>a[i];

	sort(a, a+n);

	for(int i = 0; i < n; i++){
	 	if(a[i] >= cur){
	 		ans++;
	 		cur += a[i];
	 	}
	}
	cout<<ans;
   
                  
}
