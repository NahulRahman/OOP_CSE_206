#include<bits/stdc++.h>
using namespace std;
class Rectangle
{
    int width;
    int height;
public:
    Rectangle()
    {
        height=0;
        width=0;
    }
    Rectangle(int a,int b)
    {
        height=a;
        width=b;
    }
    Rectangle(const Rectangle& obj)
    {
        height=obj.height;
        width=obj.width;
    }
    int get_h()
    {
        return height;
    }
    int get_w()
    {
        return width;
    }
    void set_W(int x)
    {
        width=x;
    }
    void set_H(int h)
    {
        height=h;
    }
    int getArea()
    {
        return height*width;
    }
    Rectangle same(Rectangle b)
    {
        if(getArea()==b.getArea()) return 1;
         else return 0;
    }
    bool S()
    {
        if(get_h()==get_w())
        {
            return true;
        }
        return false;
    }
    int get_p()
    {
        return 2*(get_h()+get_w());
    }

};
int main()
{
    Rectangle r1(5,10);
    Rectangle r2=r1;
    r2.width(7);//setWitdh
    cout<<r1.getArea()<<endl;
    cout<<r2.getArea()<<endl;

    return 0;
}
