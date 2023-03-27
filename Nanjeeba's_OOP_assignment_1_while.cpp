#include<bits/stdc++.h>
using namespace std;
class Student{
public:
    int id,code;
    float ct1,ct2,ct3,mid,final_res_a,final_res_b,final_res,bestct2;
    float present,t_class=42,attend,perf;
    char grade;
    void calc_rate()
    {
        final_res = attend + perf + bestct2+ mid + final_res_a + final_res_b;
        if(final_res>=240) grade = 'A';
        else if(final_res>=200) grade = 'B';
        else if(final_res>=160) grade = 'C';
        else if(final_res>=120) grade = 'D';
        else if(final_res<120)  grade = 'F';
        else grade = 'E';
        cout<<"Total (Out of 300): "<<final_res<<"\n\n";
        cout<<id<<" Attained the Grade: "<<grade<<" in "<<code<<" with total marks of (out of 300): "<<final_res<<"\n";
    }
    void best_2CT(){
        int z = min({ct1,ct2,ct3});
        bestct2 = (ct1+ct2+ct3)-z;
        bestct2 = (60*bestct2)/40;
        cout<<"Best 2 CT Mark (out of 60): "<<bestct2<<"\n";
    }
    void att(){
        attend = (present/t_class)*15;
        cout<<"Attendance Mark: "<<attend<<"\n";
    }
    void performance(){
        perf = ((mid/30)*15 - (t_class- present));
        if(perf<0) perf = 0;
        cout<<"Performance Mark: "<<perf<<"\n";
    }
};
int main(){
    while(1){
    Student s1;
    cout<<"Enter Roll: ";
    cin>>s1.id;
    cout<<"Enter Course Code: ";
    cin>>s1.code;
    cout<<"Enter Number of classes present in(out of 42): ";
    cin>>s1.present;
    cout<<"Enter CT 1 Marks (Out of 20): ";
    cin>>s1.ct1;
    cout<<"Enter CT 2 Marks (Out of 20): ";
    cin>>s1.ct2;
    cout<<"Enter CT 3 Marks (Out of 20): ";
    cin>>s1.ct3;
    cout<<"Enter Mid Marks (Out of 30): ";
    cin>>s1.mid;
    cout<<"Enter Final(Sec A) Marks (Out of 90): ";
    cin>>s1.final_res_a;
    cout<<"Enter Final(Sec B) Marks (Out of 90): ";
    cin>>s1.final_res_b;
    cout<<"\n\n\n";
    cout<<"After Calculation\n\n";
    s1.att();
    s1.performance();
    s1.best_2CT();
    s1.calc_rate();
    cout<<endl<<endl;
}
}
