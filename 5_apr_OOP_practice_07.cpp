#include<iostream>
using namespace std;
class stu{
public:
    int id;
    string name;
    double cg;
    void setvalue(int x,string y, double z){
    id=x;
    name=y;
    cg=z;
    }
    void getvalue(){
     cout<<id<<endl<<name<<endl<<cg<<endl;
    }

};
int main(){
    stu a;
    cin>>a.id>>a.name>>a.cg;
    a.setvalue( a.id,a.name,a.cg);
    a.getvalue();
}

