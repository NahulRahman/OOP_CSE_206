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
    friend int operator <=(int ,point ) ;

};

int operator <=(int a,point o)
{
    if(a<=o.x && a<=o.y) return 1;
    else return 0;
}

int main()
{
    point p1(5,4);
    point p2(3,2);

    if(2<=p1) cout<<"p1 is greater" ;
    else cout<<"2 is greater";
}


