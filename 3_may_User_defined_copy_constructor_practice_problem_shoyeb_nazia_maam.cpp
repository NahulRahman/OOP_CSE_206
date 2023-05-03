#include<iostream>

using namespace std;

class point
{
    int x,y;

public:


    point(int a,int b){
    x=a;
    y=b;
    }

    point(const point& ob)
    {
    x=ob.x;
    y=ob.y;
    }

    void print()
    {
        cout<<x<<" "<<y<<endl;
    }

/*
    my(const my& obj){
    s=obj.s;
    a=new int[obj.s];
    for(int i=0;i<s;i++)
    {
        a[i]=obj.a[i];
    }
    }
*/
};

int main()
{
    point ob1(5,7);

    point ob2=ob1;
    //point ob2(ob1);

    ob2.print();
}
