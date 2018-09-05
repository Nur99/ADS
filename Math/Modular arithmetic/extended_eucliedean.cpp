#include <bits/stdc++.h>
using namespace std;

int gcdExtended(int a, int b, int &x, int &y){
    
    if(a == 0){
        x = 0, y = 1;
        return b;
    }
    int x1, y1;
    gcdExtended(a%b, b, &x1, &y1);
    x = y1 - (b/a)*x1;
    y = x1;
}
int main(){
    int a, b;
    cin>>a>>b;
    
    int x, y;
    int g = gcdExtended(a, b, &x, &y);
        
    if(g == 1) cout<<(x%m+m)%m;   
    else cout<<-1;    
}
