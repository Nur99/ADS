#include <iostream>
using namespace std;

char get(int a){
    if(a >= 10){
        return 'A'+a-10;
    }
    else{
        return '0'+a;
    }
}

int main(){
    int n;
    cin>>n;
    
    for(int i = 2; i <= 36; i++){
        char a[101];
        int j = 0;
        
        int m = n;
        
        
        while(m != 0){
            a[j++] = get(m%i);    
            m /= i;
        }
        cout<<i<<": ";
        while(j != 0){
            cout<<a[--j];   
        }    
        cout<<endl;
    }
    
    

}
