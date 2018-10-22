#include <bits/stdc++.h>
using namespace std;

int main(){
/*
a = 110011
b = 111000

c = 111011




*/
    int a, b;
    cin >> a >> b;
    
    int c = a | b;
    int ans1 = c&b, ans2 = c&a;
    cout<<ans1<<' '<<ans2;

    
}
