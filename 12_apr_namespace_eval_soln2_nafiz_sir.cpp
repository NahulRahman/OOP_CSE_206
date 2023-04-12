#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class Time{
    int hour,minute,second;
public:
    Time(){
        hour=0;
        minute=0;
        second=0;
    }
    Time(int hour, int minute, int second){
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    void print(){
        cout<<endl<<hour<<" "<<minute<<" "<<second<<endl;
    }
    void difference(Time p){
       int hr=abs(hour-p.hour);//hour=t1,p.hour=t2
        int min_=abs(minute-p.minute);
        int sec=abs(second-p.second);
        cout<<hr<<" "<<min_<<" "<<second<<endl;
    }
};
int main(){
    string s1,s2;

    cout<<"City 1 name: ";
    cin>>s1;
    cout<<endl;
    cout<<"Time of "<<s1<<": ";
    int h,m,s;
    char p;
    cin>>h>>p>>m>>p>>s;
    Time t1(h,m,s);//cout<<endl<<h<<" "<<m<<" "<<s<<endl;
    t1.print();
    cout<<endl;

    cout<<endl<<"City 2 name: ";
    cin>>s2;
    cout<<endl;
    cout<<"Time of "<<s2<<": ";
    cin>>h>>p>>m>>p>>s;
    Time t2(h,m,s);//cout<<endl<<h<<" "<<m<<" "<<s<<endl;
    t2.print();
    cout<<endl;
    //Time t(11,10,10);
    //t.print();
    t1.difference(t2);

}
