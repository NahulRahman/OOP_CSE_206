#include<iostream>
using namespace std;
class Point{
public://base class, subclass, parent class. from the class the class in inherites
    int x,y;
};
class Point3D:public point{//: represents a class inherits another class
//derived class, super class, child class. the class that inherits from a class
public:
    int z;
};
/*
access specifier:
public, private, protected
public(parent)  + public(child)  = public
public(parent)  + private(child) = private
private(parent) + private(child) = private
*/
