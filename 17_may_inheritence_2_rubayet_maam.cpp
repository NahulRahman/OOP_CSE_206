#include<bits/stdc++.h>
using namespace std;
class Student{
    int theory,sessional;
public:
    void setmarks(int theory,int sessional){
        this->theory=theory;
        this->sessional=sessional;
    }
    int get_theory(){
        return theory;
    }
    int get_sessional{
        return sessional;
    }
};
class StudentL4:public Student{
    int thesis;
public:
    void setthesis(int thesis){
        this->thesis=thesis;
    }
    int getthesis(){
        return thesis;
    }
};

int main(){
    StudentL4 S4;
    S4.setmarks(20,30);
    cout<<S4.get_theory()<<endl;
    cout<<S4.get_sessional<<endl;
    S4.setthesis(40)<<endl;
    cout<<S4.getthesis()<<endl;
    return 0;
}
