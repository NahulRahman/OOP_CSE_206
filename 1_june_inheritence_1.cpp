/*allows us to create class from an existing class
the derived class inherits the fratures from base class

class animal{
    //eat();
    //sleep();
};
class dog: public animal{
    //bark();
};
a car is a vehicle
a dog is an animal
a surgeon is a doctor
doctor class er moddhe surgeon class
*/
/*
Class parent_class{
  //body
};
class child_class : access_specifier parent_class{
    //body
};
*/

 #include<iostream>
 using namespace std;
 class Animal{//common elements are accessed in base class
 public:
    void eat(){
        cout<<"I can eat"<<endl;
    }
    void sleep(){
        cout<<"I can sleep"<<endl;
    }
 };
 //derived class
 class Dog:public Animal{
    public:
        void bark(){
            cout<<"I can bark"<<endl;
        }
 };

 int main(){
    Dog d1;
    d1.eat();
    d1.sleep();
    d1.bark();
    return 0;
 }
