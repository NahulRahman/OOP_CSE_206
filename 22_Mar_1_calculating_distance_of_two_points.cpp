//thanks iftee bro

#include<iostream>
#include<cmath>
using namespace std;

class point{
    public:
    double x,y;
    void distance(point p1, point p2){
        double d= sqrt((pow((p2.x-p1.x),2)+pow((p2.y-p1.y),2)));
        cout<<d;
    }
};


int main(){
    double x,y;
    point p,p1,p2;
    cin>>x>>y;
    p1.x=x;
    p1.y=y;
    cin>>x>>y;
    p2.x=x;
    p2.y=y;
    p.distance(p1,p2);
    return 0;
}
