#include<bits/stdc++.h>
using namespace std;

class Vehicle
{
public:
    Vehicle()
    {
        cout<<"Vehicle constructor called"<<endl;
    }
    ~Vehicle()
    {
        cout<<"Vehicle destructor called"<<endl;
    }
};
class Engine
{
    public:
    Engine()
    {
        cout<<"Engine constructor called"<<endl;
    }
    ~Engine()
    {
        cout<<"Engine destructor called"<<endl;
    }
};
class Frame
{
    public:
    Frame()
    {
        cout<<"Frame constructor called"<<endl;
    }
    ~Frame()
    {
        cout<<"Frame destructor called"<<endl;
    }
};
class Car:public Vehicle,public Engine
{
    public:
    Car()
    {
        cout<<"Car constructor called"<<endl;
    }
    ~Car()
    {
        cout<<"Car destructor called"<<endl;
    }
};
class Bicycle:public Vehicle,public Frame
{
    public:
    Bicycle()
    {
        cout<<"Bicycle constructor called"<<endl;
    }
    ~Bicycle()
    {
        cout<<"Bicycle destructor called"<<endl;
    }
};

int main()
{
    Car c;
    Bicycle b;
    return 0;
}
