#include<bits/stdc++.h>
using namespace std;
class Line
{
    int x,y;
public:

    Line()
    {
        x=0;
        y=0;
    }

    Line(int a,int b)
    {
        x=a;
        y=b;
    }
    void setx(int a)
    {
        x=a;

    }

    void sety(int b)
    {
        y=b;

    }
    int getx()
    {
        return x;
    }
     int gety()
    {
        return y;
    }
    int Length(Line l2)
    {
        int f=abs(sqrt((x-l2.x)*(x-l2.x)+(y-l2.y)*(y-l2.y)));
        cout<<f<<endl;
    }
    int midpoint(Line l1,Line l2)
    {
        int k=(l1.x+l2.x)/2;
        int m=(l1.y+l2.y)/2;
        cout<<"x:"<<k<<",y:"<<m<<endl;
    }
};
int main()
{
    Line l1,l2,l;
    int x,y;
    cin>>x>>y;
    l1.setx(x);
    l1.sety(y);
    cin>>x>>y;
    l2.setx(x);
    l2.sety(y);
    l1.Length(l2);
    l.midpoint(l1,l2);


}

