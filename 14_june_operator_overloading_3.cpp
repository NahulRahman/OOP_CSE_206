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

    int operator >(point o)
    {
        if(x>y && y>o.x && o.x>o.y) return 1;
        else return 0;
    }
};

int main()
{
    point p1(5,4);
    point p2(3,2);

    if(p1>p2) cout<<"p1 is greater" ;
    else cout<<"p2 is greater";
}

