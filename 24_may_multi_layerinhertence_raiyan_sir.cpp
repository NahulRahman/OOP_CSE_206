#include<iostream>
using namespace std;
class Groundfloor{
public:
    Groundfloor(){
        cout<<"Ground floor is called"<<endl;
    }
    ~Groundfloor(){
        cout<<"Destructed ground floor successfully "<<endl;
    }
};
class Firstfloor:public Groundfloor{
public:
    Firstfloor(){
        cout<<"First floor is called"<<endl;
    }
    ~Firstfloor(){
        cout<<"Destructed first floor successfully "<<endl;
    }
};
int main(){
    Firstfloor f;
}
