#include<iostream>
using namespace std;
class stu{
public:
    int id;
    string name;
    double cg;
    void print();
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
    stu c;
    cin>>c.id>>c.name>>c.cg;
    c.print();
    return 0;
}
void stu:: print(){
         cout<<id<<endl<<name<<endl<<cg<<endl<<endl;
    }
