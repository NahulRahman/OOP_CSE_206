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
    void print(){
    cout<<"Name: "<<name<<" . Age: "<<age<<endl;
}
};
int main(){
    Person p1("Alice",25);//person is a class whose object is p1,
    //we're passing parameters. we need to initial values of objects that's why we're using parameterized constructors
    Person p2=p1;//the name and age of p1 is copied to p1.  direct value copy(shalow copy) dcc er adress o copy korbe, jate jodi marks integer allocate korle marks same holeo p1,p2 er marks pointer aki address ke copy kore thakbe
    p1.print();//Name: Alice . Age: 25
    p2.print();//Name: Alice . Age: 25
    return 0;
}
/*
we want to assign values from p1 to p2
in C++ a default copy c
by default akta constructor invoke hoi, eke default copy constructor bole. statically object declare korle default copy constructor e hat dea lage na.
adress  copy hole
*/
