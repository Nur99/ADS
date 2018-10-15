#include <iostream>
using namespace std;
struct point{
    int x, y;
};
struct line{
    point p1, p2;  
};

int orientation(point a, point b, point c){
    //int v = (x3-x2)*(y2-y) - (x2-x)*(y3-y2);
    int v = (c.x-b.x)*(b.y-a.y) - (b.x-a.x)*(c.y-b.y);
    
    if(!v)return 0;
    return (v > 0) ?1 :2;
}

bool onSegment(point a, point b, point c){
    if(a.x <= b.x && b.x <= c.x && a.y <= b.y && b.y <= c.y)return 1;
    return 0;
}

bool intersect(line l, line l2){
    
    int o1 = orientation(l.p1, l.p2, l2.p1);
    int o2 = orientation(l.p1, l.p2, l2.p2);
    int o3 = orientation(l2.p1, l2.p2, l.p1);
    int o4 = orientation(l2.p1, l2.p2, l.p2);
    
    if(o1 != o2 && o3 != o4)return 1;
    
    if(!o1 && onSegment(l.p1, l2.p1, l.p2))return 1;
    if(!o1 && onSegment(l.p1, l2.p2, l.p2))return 1;
    if(!o1 && onSegment(l2.p1, l.p1, l2.p2))return 1;
    if(!o1 && onSegment(l2.p1, l.p2, l2.p2))return 1;    
    
    return 0;
}

int main(){
    
    point a, b;
    cin>>a.x>>a.y>>b.x>>b.y;
    
    line l;
    l.p1 = a, l.p2 = b;
    
    point c, d;
    cin>>c.x>>c.y>>d.x>>d.y;
    
    line l2;
    l2.p1 = c, l2.p2 = d;
    
    
    if(intersect(l, l2))cout<<"Yes";
    else cout<<"No";
    
    
    
}
