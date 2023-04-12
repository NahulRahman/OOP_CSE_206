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
    friend void difference(Time t1,Time t2);// friend void difference(Time,Time); will also be valid //diffe is my friend and so access my members to the function
};
void difference(Time t1,Time t2){  //usage of friend function and friend class(well make difference function a friend of time class)
       int hr=abs(t1.hour-t2.hour);
        int min_=abs(t1.minute-t2.minute);
        int sec=abs(t1.second-t2.second);
        cout<<hr<<" "<<min_<<" "<<sec<<endl;
    }
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
    difference(t1,t2);
    retuen 0;
}
