#include<bits/stdc++.h>
using namespace std;
class Person
{
public:
    string name;
    int age;
    Person(string nm,int ag)
    {
        name=nm;
        age=ag;
        cout<<"Person is constructed"<<endl;
    }
    ~Person()
    {
        cout<<"Person is destructed"<<endl;
    }
};
class Employee: public Person
{
    public:
    int salary;
    Employee(string nm,int age,int sal) : Person(nm,age)
    {
          salary=sal;
          cout<<"Employee is constructed"<<endl;
    }
    ~Employee()
    {
        cout<<"Employee is destroyed"<<endl;
    }
};
class Manager :public Employee
{
public:
    string depertment;
    Manager(string nm,int age,int sal,string dept) : Employee(nm,age,sal)
    {
        depertment=dept;
        cout<<"Manager is constructed"<<endl;
    }
    ~Manager()
    {
        cout<<"Manger is destroyed"<<endl;
    }
};
int main()
{
    Person p("John",20);
    cout<<"Person name:"<<p.name<<endl;
    cout<<"Person age:"<<p.age<<endl;
    Employee e("Jane",30,50000);
    cout<<"Employee name:"<<e.name<<endl;
    cout<<"Employee age:"<<e.age<<endl;
    cout<<"Employee salary:"<<e.salary<<endl;
    Manager m("Bob",40,80000,"CSE");
    cout<<"Manager name:"<<m.name<<endl;
    cout<<"Manager age: "<<m.age<<endl;
    cout<<"Manager salary: "<<m.salary<<endl;
    cout<<"Manager department:"<<m.depertment<<endl;
}
