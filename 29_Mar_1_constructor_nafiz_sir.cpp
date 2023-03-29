#include<iostream>
using namespace std;
class Calculator{
    int val1;
    int val2;
    public:
    Calculator(){ // ,invoked by itself, invoke implicitly, there is no return type in constructor, it must be in public scope, kono default value diea member value initialize kora, compiler calls it implicitly.
        val1=20;//default constructor
        val2=30;//constructor na dile garbage value paitam.
    }
    Calculator(int a, int b){
        val1=a;
        val2=b;
    }
    void set_values(int p, int q){
        val1=p;
        val2=q;
    }
    int get_val_1(){
        return val1;
    }
     int get_val_2(){
        return val2;
    }
    int addition(){
        return val1+val2;
    }
};
int main(){
    Calculator c1;
    cout<<c1.get_val_1()<<endl;
    cout<<c1.get_val_2()<<endl;

    Calculator c2(5,10);//to avoid calling extra set_value functions, object toiri jokhon hbe tokhon jeno hoi amar icchamoto hoi. ??parameterized constructor
    cout<<c2.get_val_1()<<endl;
    cout<<c2.get_val_2()<<endl;
    /*c1.set_values(10,10);
    cout<<c1.get_val_1()<<endl;
    cout<<c1.get_val_2()<<endl;
    cout<<"Addition: "<<c1.addition()<<endl;*/
}


