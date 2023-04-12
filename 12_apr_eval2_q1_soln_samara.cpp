#include<bits/stdc++.h>
using namespace std;

class time1
{
    int hour;
    int minute;
    int second;
public:
    time1()
    {
        hour=0;
        minute=0;
        second=0;
    }
    time1(int hour,int minute, int second)
    {
        this->hour=hour;
        this->minute=minute;
        this->second=second;
    }
    void print(){
        cout<<hour<<" " <<minute<<" "<<second<<endl;
    }

};

int main()
{
    string s1,s2;

    cout<<"City 1 name: ";
    cin>>s1;
    cout<<endl;
    cout<<"Time of "<<s1<<" :";
    int h,m,s;
    char p;
    cin>>h>>p>>m>>p>>s;
    time1 t1(h,m,s);
    cout<<"City 2 name: ";
    cin>>s2;
    cout<<endl;
    cout<<"Time of "<<s2<<" :";
    cin>>h>>p>>m>>p>>s;
    time1 t2(h,m,s);

    t1.print();
    t2.print();


}
