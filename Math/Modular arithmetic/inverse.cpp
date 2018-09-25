#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define pb push_back
#define mp make_pair

/*
  b/a*a + b%a = b = 0 mod b
  b/a*a = -b % a
  rev[a] = (-b/a * rev[b%a]) % b
*/

int rev[100100];
int main(){
	ios_base::sync_with_stdio(0);

	rev[1] = 1;

	int n, p;
	cin>>n>>p;

	for(int i = 2; i <= n; i++){
	 	rev[i] = (-p/i*rev[p%i]) % p;
	 	rev[i] = (rev[i] + p) % p;
  	}

  	for(int i = 1; i <= n; i++){
  	 	cout<<rev[i]<<' ';
  	}
}
