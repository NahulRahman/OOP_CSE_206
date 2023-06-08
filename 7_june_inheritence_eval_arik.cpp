#include<bits/stdc++.h>
using namespace std;
class Person
{
private:
    long long contact;
protected:
    string designation;
public:
    virtual double getSal() = 0;
    string fullName;
    long long id;
    Person(string fullName,long long contact,string designation,long long id)
    {
        this->fullName = fullName;
        this->contact = contact;
        this->designation = designation;
        this->id = id;
    }
    ~Person(){}
};
class Employee: public Person
{
private:
    double basicSal;
public:
    double bonus;
    double getSal()
    {
        return basicSal + bonus;
    }
    Employee(string name,long long id,long long contact, string des,double bonus,double basicSal) : Person(name,contact,des,id)
    {
        this->basicSal = basicSal;
        this->bonus = bonus;
    }
    ~Employee(){}
};
class Operator: public Employee
{
private:
    double overtimeRate;
    double hour;
public:
    Operator(string name,long long id,long long contact, string des,double bonus,double basicSal,double overtimeRate,double hour) : Employee(name,id,contact,des,bonus,basicSal)
    {
        this->overtimeRate = overtimeRate;
        this->hour = hour;
    }
    double getSal()
    {
        return Employee::getSal() + overtimeRate*hour;
    }

    ~Operator(){}
};
void PrintSal(Person *p)
{
    cout<<"Salary of Worker Name "<< p->fullName<< " ID: "<<p->id<<" is "<<p->getSal()<<endl;
}
int main()
{
    Operator op = Operator("arik",27,1001,"student",5,1000,10,40);
    cout<<op.getSal()<<endl;
    PrintSal(&op);
}
