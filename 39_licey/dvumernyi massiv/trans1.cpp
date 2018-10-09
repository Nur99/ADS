#include <bits/stdc++.h>

using namespace std;

int a[100][100], n;

void ainal(){
    int b[n][n];
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            b[i][j] = a[j][i];   
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            a[i][j] = b[i][j];   
        }
    }
    
}

int main(){
    
    cin>>n;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];   
        }
    }
    
    ainal();
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<a[i][j]<<' ';   
        }
        cout<<endl;
    }
    
}
