#include<bits/stdc++.h>
using namespace std;

class point{

    int x,y;

public:

    point(int a,int b)
    {
        x=a;
        y=b;
    }

    float operator -(point o)
    {
        return sqrt( (x-o.x)*(x-o.x) + (y-o.y)*(y-o.y) );
    }
};

int main()
{
    point p1(2,3);
    point p2(5,6);

    float distance = p1-p2;
    cout<<distance ;
}
