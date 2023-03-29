#include<iostream>
using namespace std;
class Calculator{
    int val1;
    int val2;
    public:
    void set_val_1(){
        val1=10;
    }
    void set_val_2(){
        val2=15;
    }
    int get_val_1(){
        return val1;
    }
     int get_val_2(){
        return val2;
    }
};
int main(){
    Calculator c1;
    c1.set_val_1();
    c1.set_val_2();
    cout<<c1.get_val_1()<<endl;
    cout<<c1.get_val_2()<<endl;
}

