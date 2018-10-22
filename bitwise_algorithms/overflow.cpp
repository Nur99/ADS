#include <bits/stdc++.h>
using namespace std;

bool sumIsOverflow(int a, int b){
    if(a + b < 0 && a > 0 && b > 0)return true;
    if(a + b > 0 && a < 0 && b < 0)return true;
    return false;
}

int main(){
    int a, b;
    cin >>a >> b;
    
    if(sumIsOverflow(a, b)){
        cout<<"Overflow";   
    }
    else{
        cout<<a+b;   
    }
    
}
