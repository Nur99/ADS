#include <bits/stdc++.h>
using namespace std;
int dp[256][256];
bool good(string a, string b, int i, int j){
    if(dp[i][j] != -1)return dp[i][j];
    if(j == b.size() && i != a.size()) return dp[i][j] = 0;
    if(i == a.size() && j == b.size())return dp[i][j] = 1;
    if(i == a.size()){
        for(int k = j; k < b.size(); k++){
            if(b[k] != '*')return dp[i][j] = 0;
        }
        return dp[i][j] = 1;
    }
    if(b[j] == '*')return dp[i][j] = good(a, b, i+1, j+1) | good(a, b, i+1, j) | good(a, b, i, j+1);//4 3
    if(a[i] == b[j] || b[j] == '?')return dp[i][j] =  good(a, b, i+1, j+1);
    return dp[i][j] = 0;
}
void init(){
    for(int i = 0; i <= 255; i++){
        for(int j = 0; j <= 255; j++)dp[i][j] = -1;   
    }   
}
int main(){
    string a, b;
    cin>>a>>b;
    init();
    if(good(a, b, 0, 0))cout<<"YES", exit(0);
    init();
    if(good(b, a, 0, 0))cout<<"YES", exit(0);
    cout<<"NO";
}
