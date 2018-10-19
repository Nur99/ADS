#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

map <pair <int, int>, int> slope;
int n;
vector <pair <int, int> > v(10001);
int main(){
    
    
    int t;
    cin>>t;
    
    while(t--){
        cin >> n;
        
        for(int i = 0; i < 2*n; i++){
            int x;
            cin>>x;
           if(i < n)v[i].first = x;
           else v[i%n].second = x;
        }
        
        int ans = 0;
        for(int i = 0; i < n; i++){
            int ver = 0, hor = 0, overlapp = 0, cur = 0;
            for(int j = i+1; j < n; j++){
                if(v[i] == v[j])overlapp++;
                else if(v[i].first == v[j].first)ver++;
                else if(v[i].second == v[j].second)hor++;
                else{
                    int x = v[i].first, xx = v[j].first, y = v[i].second, yy = v[j].second;
                    int gx = xx-x, gy = yy-y;
                    int g  = __gcd(gx, gy);
                    gx /= g, gy /= g;
                    if(gx < 0)gx *= -1, gy *= -1;
                    slope[mp(gx, gy)]++;
                    cur = max(slope[mp(gx, gy)], cur);
                }
                cur = max(max(ver, hor), cur);
            }
            ans = max(ans, cur+overlapp);
            slope.clear();
        }
        cout<<ans+1<<endl;
    }
}
