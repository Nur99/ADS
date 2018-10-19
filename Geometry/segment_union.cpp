#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

struct point{
    int x, y;
};
int main(){
   int n;
   cin>>n;
   
   vector <pair <int, bool> > v;
   while(n--){
        int x, y;
        cin >> x >> y;
        v.pb(mp(x, 0));
        v.pb(mp(y, 1));
   }
   
   sort(v.begin(), v.end());
   int co = 1, res = 0;
   for(int i = 1; i < v.size(); i++){
        if(co){
           res += v[i].first - v[i-1].first;
        }
        if(v[i].second)co--;
        else co++;
   }
   cout<<res;   
}
