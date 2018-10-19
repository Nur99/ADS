#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair

map <pair <int, int>, int> slope;
int n;
vector <pair <int, int> > v;
int main(){
    cin >> n;
    
    while(n--){
        int x, y;
        cin >> x >> y;
        v.pb(mp(x, y));
    }
    
    int ans = 0;
    for(int i = 0; i < v.size(); i++){
        int ver = 0, hor = 0, overlapp = 0, cur = 0;
        for(int j = i+1; j < v.size(); j++){
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
                cur = max(slope[mp(gx, gy)], max(ver, hor));
            }
        }
        ans = max(ans, cur+overlapp);
        slope.clear();
    }
    cout<<ans+1;
}
