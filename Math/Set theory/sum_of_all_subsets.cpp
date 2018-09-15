#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    cout<<"Sum of all subsets: ";
    cout<<n*(n+1)/2*(1 << (n-1));
}
