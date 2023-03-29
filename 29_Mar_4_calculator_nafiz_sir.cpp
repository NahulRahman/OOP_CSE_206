#include<iostream>
using namespace std;
class Calculator{
    int val1;
    int val2;
    public:
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
    c1.set_values(10,10);
    cout<<c1.get_val_1()<<endl;
    cout<<c1.get_val_2()<<endl;
    cout<<"Addition: "<<c1.addition()<<endl;
}


