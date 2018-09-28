#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mp make_pair
#define pb push_back

#define maxN 100100

int a[100100], t[maxN*8], lazy[maxN*8];
void build(int l, int r, int i){

	if(l == r){
	 	t[i] = a[l];
	 	return;
	}

	int m = (l+r)/2;

	build(l, m, i*2);
	build(m+1, r, i*2+1);
	t[i] = t[i*2] + t[i*2+1];
}

void push(int i, int l, int r){
 	if(lazy[i] != 0){
		t[i] += lazy[i] * (r-l+1);
		lazy[i*2] += lazy[i];
		lazy[i*2+1] += lazy[i];
		lazy[i] = 0;         
   }
}

void update(int l, int r, int ql, int qr, int add, int i){
	if(r < ql || qr < l)return;	

	//if something was changed	
	push(i, l, r);

   if(ql <= l && r <= qr){
    	t[i] += (r-l+1)*add;

    	if(l != r){
    	 	lazy[i*2] += add;
    	 	lazy[i*2+1] += add;
    	}
    	return;
   }

   int m = (l+r)/2;

   update(l, m, ql, qr, add, i*2);
   update(m+1, r, ql, qr, add, i*2+1);

   t[i] = t[i*2] + t[i*2+1];
}

int getSum(int l, int r, int ql, int qr, int i){
	if(qr < l || r < ql)return 0;
	
	push(i, l, r);

	if(ql <= l && r <= qr){
	 	return t[i];
	}

   int m = (l+r)/2;

   return getSum(l, m, ql, qr, i*2) + getSum(m+1, r, ql, qr, i*2+1);
}

int main(){
	ios_base::sync_with_stdio(0);               
	int n = 10;

	for(int i = 1; i <= n; i++)a[i] = 1;

	build(1, n, 1);
   update(1, n, 3, 5, 2, 1);

   cout<<getSum(1, n, 3, 7, 1)<<endl;
}
