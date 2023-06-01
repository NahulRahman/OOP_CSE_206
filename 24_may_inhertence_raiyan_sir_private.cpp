#include<iostream>
using namespace std;
class Student{
    int theory,sessional;
public:
    void setmarks(int theory, int sessional){
        this->theory=theory;
        this->sessional=sessional;
    }
    int gettheory(){
        return theory;
    }
    int getsessional(){
        return sessional;
    }
};
class L4student:private Student{
    int thesis;
public:
    void setthesis(int thesis){
        this->thesis=thesis;
    }
    int getthesis(){
        return thesis;
    }
    void set_marks(int theory, int sessional){
        setmarks(theory, sessional);
    }
    int get_theory(){
        return gettheory();
    }
    int get_sessional(){
        return getsessional();
    }
};
int main(){
    L4student S1;
    int theory, sessional, thesis;
    cout<<"Enter theory marks: ";
    cin>>theory;
    cout<<"Enter practical marks: ";
    cin>>sessional;
    cout<<"Enter thesis marks: ";
    cin>>thesis;
    S1.set_marks(theory, sessional);
    S1.setthesis(thesis);
    cout<<"the student got "<<S1.get_theory()<<" in theory, "<<S1.get_sessional()<<" in sessional and  "<<S1.getthesis()<<" in L4 thesis"<<endl;
}
