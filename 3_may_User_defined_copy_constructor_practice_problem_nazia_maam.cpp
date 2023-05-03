#include<iostream>
using namespace std;
class Point{
int a,b;
public:
    Point(int x,int y){//kind of setvalue
        a=x;
        b=y;
        cout<<"Point object "<<endl;
    }//value pass korar jonno parameter, can be assumed as carrier
    Point(const Point & obj){
        a=obj.a;
        b=obj.b;
        cout<<"Copying Point Object -> "<<endl;
    }
    void print(){
        cout<<a<<"  "<<b<<endl;
    }
};
int main(){
    Point p1(3,4);
    Point p2=p1;
    p1.print();
    p2.print();
    return 0;
}
