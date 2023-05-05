#include<iostream>
using namespace std;
class Point{
public:
    int x;
    int y;
    point(const Point&other){
        x=other.x;
        y=other.y;
    }
};
int main(){
    Point p1={10,20};
    Point p2=p1;

    cout<<"p1 : ("<<p1.x<<","<<p1.x<<")"<<endl;//p1 : (10,10)
    cout<<"p2 : ("<<p2.x<<","<<p2.x<<")"<<endl;//p2 : (10,10)

    return 0;
}
