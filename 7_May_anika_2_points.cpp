//distance between two points
#include <bits/stdc++.h>
using namespace std;
class Point
{
    int x,y;
public:
    int getx()
    {
        return x;
    }
    int gety()
    {
        return y;
    }
    Point()
    {
        x=0;
        y=0;
    }
    void setx(int a)
    {
        x=a;
    }
    void sety(int b)
    {
        y=b;
    }
    Point(int a,int b)
    {
        x=a;
        y=b;
    }
       Point(const Point& p)
    {
        x=p.x;
        y=p.y;
    }
    Point * shiftBy(int dx, int dy)
    {
        x=x+dx;
        y=y+dy;
        //return x;
        //return y;
    }
    double distance(Point p1,Point p2)
    {
        double p=sqrt((p1.x-p2.x)*(p1.x-p2.x)+(p2.y-p2.y)*(p2.y-p2.y));
        cout<<"DIstance:"<<p<<endl;

    }
    void print()
    {
        cout<<"X:"<<x<<",Y :"<<y<<endl;

    }
    /*~Point()
    {
      delete[]x;
        delete[]y;
    }*/

};
int main()
{
    Point p1={3,4};
    p1.shiftBy(2,6);
    Point p2=p1;
   // p1.print();
   Point p3;
   p3.distance(p1,p2);
   p2.print();
}
