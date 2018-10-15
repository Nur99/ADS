#include <iostream>
using namespace std;
int main(){
    int x, y, x2, y2, x3, y3;
    cin>>x>>y>>x2>>y2>>x3>>y3;
    
    
    double v = (x2-x)*1.0/((y2-y)*1.0) - (x3-x2)*1.0/((y3-y2)*1.0);
    
    if(v == 0.0)cout<<"Linear";
    else if(v > 0.0)cout<<"Clockwise";
    else cout<<"CounterClockWise";
    
    
}
