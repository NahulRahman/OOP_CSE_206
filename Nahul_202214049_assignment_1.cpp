#include<bits/stdc++.h>
using namespace std;
class grade{
public:
    long int id,code,cls,a=42;
    double ct1,ct2,ct3,mid,A,B;
    char grade;
    void attendence(){
        cout<<"Attendance Mark: "<<(((double)cls/a)*15)<<endl;
    }
    void performance(){
        double perf=((((double)mid/30)*15)-(a-cls));
        if(perf<0){
            perf=0;
            cout<<"Performance Mark: "<<perf<<endl;
        }
        else cout<<"Performance Mark: "<<perf<<endl;
    }
    void ct(){
        cout<<"Best 2 CT Mark (out of 60): "<<((double)(60*((ct1+ct2+ct3)-min({ct1,ct2,ct3})))/40)<<endl;
    }
    void gr(){
        double perf=((((double)mid/30)*15)-(a-cls));
        if(perf<0) perf=0;
        double res=(((double)cls/42)*15)+perf+((double)(60*((ct1+ct2+ct3)-min({ct1,ct2,ct3})))/40)+mid+A+B;
        if(res>=240) grade = 'A';
        else if(res>=200) grade = 'B';
        else if(res>=160) grade = 'C';
        else if(res>=120) grade = 'D';
        else if(res<120)  grade = 'F';
        else grade = 'E';
        cout<<"Total (out of 300): "<<res<<endl;
        cout<<id<<" Attained the grade: "<<grade<<" in "<<code<<" with total marks (out of 300): "<<res<<endl;
    }
};
int main(){
    while(1){
        grade s;
        cout<<"Enter Roll: ";
        cin>>s.id;
        cout<<"Enter Course code: ";
        cin>>s.code;
        cout<<"Enter Number of classes present in (out of 42): ";
        cin>>s.cls;
        cout<<"Enter CT 1 marks (out of 20, will be converted to 30): ";
        cin>>s.ct1;
        cout<<"Enter CT 2 marks (out of 20, will be converted to 30): ";
        cin>>s.ct2;
        cout<<"Enter CT 3 marks (out of 20, will be converted to 30): ";
        cin>>s.ct3;
        cout<<"Enter Mid marks (out of 30): ";
        cin>>s.mid;
        cout<<"Enter Final(Sec A) Marks (out of 90): ";
        cin>>s.A;
        cout<<"Enter Final(Sec B) Marks (out of 90): ";
        cin>>s.B;
        cout<<endl<<endl<<"After calculation "<<endl<<endl;
        s.attendence();
        s.performance();
        s.ct();
        s.gr();
    }cout<<endl<<endl;
}
