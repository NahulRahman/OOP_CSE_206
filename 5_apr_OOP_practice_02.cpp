#include<iostream>
using namespace std;
class stu{
public:
    int id;
    string name;
    double cg;
};
int main(){
    stu a;
    a.id=1001;
    a.name="abdul";
    a.cg=3.1416;
    cout<<a.id<<endl<<a.name<<endl<<a.cg<<endl<<endl;
    stu b;
    b.id=1002;
    b.name="abdur";
    b.cg=3.287;
    cout<<b.id<<endl<<b.name<<endl<<b.cg;
    return 0;
}

