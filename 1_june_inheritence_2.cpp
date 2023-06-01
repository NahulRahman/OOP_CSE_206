#include<iostream>
using namespace std;
class Employee{
//private:
protected:
    int id;
    string name;
    double basic,rent,medical,tax,salary;
    double calculate_salary(int id,string name){
        cout<<"Employee name: "<<name<<endl;
        cout<<"Enter basic salary from the employee: "<<id<<" : ";
        cin>>basic;
        cout<<"House rent: ";
        cin>>rent;
        cout<<"Medical allowance ";
        cin>>medical;
        tax=basic*0.10;
        salary=basic+rent+medical-tax;
        return salary;
    }
public:
    Employee(){}
    Employee(int id,string name){
        this->id=id;
        this->name=name;
    }
    void display(){
        salary=calculate_salary(id,name);
        cout<<"Salary = "<<salary<<endl;
    }
};
class Programmer : public Employee{
public:
    double bonus=10000;
    Programmer(int id,string name){
        this->id=id;
        this->name=name;
    }
    void display(){
        salary=calculate_salary(id,name)+bonus;
        cout<<"Salary = "<<salary<<endl;
    }
};
int main(){
    Employee e1(1,"abdul");
    e1.display();
    cout<<endl;
    Employee e2(2,"karim");
    e2.display();
    cout<<endl;
    Programmer e3(3,"Basit");
    e3.display();
}
