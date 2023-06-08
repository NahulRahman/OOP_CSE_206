#include<bits/stdc++.h>
using namespace std;
class Person{
private:
    double contact;
protected:
    string Designation;

public:
    string name;
    double id;
    Person(string name,double contact,string designation,double id){
        this->name = name;
        this->contact = contact;
        this->Designation = Designation;
        this->id = id;
    }
    virtual double getSal() = 0;
    ~Person(){}
};
class Employee: public Person
{
private:
    double basicSal;
public:
    double bonus;
    double getSal(){
        return basicSal + bonus;
    }
    Employee(string name,double id,double contact, string designation ,double bonus ,double basicSal) : Person(name,contact,designation,id)
    {
        this->basicSal = basicSal;
        this->bonus = bonus;
    }
    ~Employee(){}
};
class Operator: public Employee{
private:
    double overtimeRate;
    double hour;
public:
    Operator(string name,double id,double contact, string designation,double bonus,double basicSal,double overtimeRate,double hour) : Employee(name,id,contact,designation,bonus,basicSal){
        this->overtimeRate = overtimeRate;
        this->hour = hour;
    }
    double getSal(){
        return Employee::getSal() + overtimeRate*hour;
    }
    ~Operator(){}
};
void PrintSal(Person *op){
    cout<<"Salary of Worker Name "<< op->name<< " ID: "<<op->id<<" is "<<op->getSal()<<endl;
}
int main()
{
    Operator op = *(new Operator("nahul",202214049,017413,"student",500,10000,20,40));
    cout<<op.getSal()<<endl;
    PrintSal(&op);
}
