#include<iostream>
using namespace std;
class Calculator{
    int val1;
    int val2;
    public:
    void set_val_1(int p){
        val1=p;
    }
    void set_val_2(int q){
        val2=q;
    }
    int get_val_1(){
        return val1;
    }
     int get_val_2(){
        return val2;
    }
    int multiplication(){
        return val1*val2;
    }
};
int main(){
    Calculator c1;
    c1.set_val_1(10);
    c1.set_val_2(10);
    cout<<c1.get_val_1()<<endl;
    cout<<c1.get_val_2()<<endl;
    cout<<"Multiplication: "<<c1.multiplication()<<endl;
}


