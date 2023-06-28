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

    friend float operator -(point ,point );
};

float operator -(point o1,point o2)
{
    return sqrt( (o1.x-o2.x)*(o1.x-o2.x) + (o1.y-o2.y)*(o1.y-o2.y) );
}


int main()
{
    point p1(2,3);
    point p2(5,6);

    float distance = p1-p2;
    cout<<distance ;
}

