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
    cout<<a.id<<endl<<a.name<<endl<<a.cg;
    return 0;
}
