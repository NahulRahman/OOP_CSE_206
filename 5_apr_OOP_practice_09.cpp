#include<iostream>
using namespace std;
class example{
private:
    int a,b;
public:
    example(){
        cout<<"DEfault constructor"<<endl;
        a=0;b=0;
    }
    example(int x,int y){
        cout<<"Parameterized constructor"<<endl;
        a=x;
        b=y;
    }
    void display(){
        cout<<"a  : "<<a<<endl;
        cout<<"b  : "<<b<<endl;
        cout<<"a+b: "<<a+b<<endl;
        cout<<"a-b: "<<a-b<<endl;
        cout<<"a*b: "<<a*b<<endl;
        cout<<"a/b: "<<a-b<<endl;
    }
};
int main(){
    example obj;
    obj.display();
    example obj1(7,5);
    obj1.display();
    return 0;
}
