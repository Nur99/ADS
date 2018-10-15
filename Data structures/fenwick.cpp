#include <bits/stdc++.h>
using namespace std;
int n, b[101], a[101];

void update(int i){
    int j = i;
    while(j <= n){
        b[j] += a[i];
        j += j & (-j);   
    }
}

int get(int i){
    int sum = 0;
    while(i > 0){
        sum += b[i];
        i -= i & (-i);
    }
    return sum;
}

int main(){
    cin>>n;
    
    for(int i = 1; i <= n; i++)cin>>a[i];
    
    for(int i = 1; i <= n; i++){
        update(i);
    }
    
    for(int i = 1; i <= n; i++){
        cout<<get(i)<<endl;
    }

}
