//object er location niea kaj hoi.
#include<iostream>
#include<string>
using namespace std;
class Person{
    string name;
    int age;
public:
    Person(string n,int a){
        name=n;
        age=a;
        cout<<"Creating a person object  ->  "<<endl;
    }
    //User-defines copy constructor
    Person(const Person & obj){//je constructor user nije theke copy kobe take parameterized copy constructor bole.
        //in this constructor i've the ctrl what to be copied. used to avoid the problems of address issues in default copy constructor
        name=obj.name;
        age=obj.age;
        cout<<"Copying Person Object -> "<<endl;
    }
    void print(){
    cout<<"Name: "<<name<<" . Age: "<<age<<endl;
}
};
int main(){
    Person p1("Alice",25);//person is a class whose object is p1
    Person p2=p1;//the name and age of p1 is copied to p1,
    p1.print();//Name: Alice . Age: 25
    p2.print();//Name: Alice . Age: 25
    return 0;
}

