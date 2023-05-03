// akta obj er modification hole arektar opor kono effect porbe na
//aikhane duita alada memory soace use hois
#include<iostream>
using namespace std;
class MyClass{
public:
    int * arr;
    int Size;
    //Shallow copy constructor
    MyClass(){}//calling a default constructor
    MyClass(const MyClass & obj){
        Size=obj.Size;
        arr=new int[Size];
        for(int i=0;i<Size;i++){
        arr[i]=obj.arr[i];
    }
    }
    ~MyClass(){//calling destructor
    delete arr;
}
};
int main(){
    MyClass obj1;
    obj1.Size=5;
    obj1.arr= new int[obj1.Size];
    for(int i=0;i<obj1.Size;i++){
        obj1.arr[i]=i;
    }
    MyClass obj2=obj1;// calls the shallow copy constructor
    obj1.arr[0]=100;//modify obj1's array
    cout<<obj2.arr[0]<<endl;//prints 100
    return 0;
}
