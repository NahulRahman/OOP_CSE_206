#include<iostream>
using namespace std;
class stu{
public:
    int id;
    string name;
    double cg;
    void print(){
         cout<<id<<endl<<name<<endl<<cg<<endl<<endl;
    }
};
int main(){
    stu a;
    cin>>a.id;
    cin>>a.name;
    cin>>a.cg;
    a.print();
    stu b;
    cin>>b.id;
    cin>>b.name;
    cin>>b.cg;
    b.print();
    return 0;
}
