#include<bits/stdc++.h>
using namespace std;

class time1{

    int hr;
    int mi;
    int sec;

public:


    void settime(int x,int y,int z)
    {
        hr=x;
        mi=y;
        sec=z;
    }

    int gethr()
    {
        return hr;
    }

    int getmi()
    {
        return mi;
    }
    int getsec()
    {
        return sec;
    }

    int diff(int a,int b)
    {
        return a-b ;
    }

};

int main()
{

    time1  p;
    time1  q;
    time1 r;

    int x,y,z,a,b;
    string s1,s2;

    cout<<"City 1 Name:";
    cin >>s1;

    cout<< "Time of "<<s1<<": ";

    cin >>x;
    cout<<":";
    cin >>y;
    cout<<":";
    cin >>z;
    cout<<":";
    p.settime(x,y,z);

    cout<<"City 2 Name:";
    cin >>s2;
     cout<<"Time of "<<s2<<": ";
    cin >>x;
    cout<<":";
    cin >>y;
    cout<<":";
    cin >>z;
    cout<<":";
    q.settime(x,y,z);

    cout<<"Tine difference between"<<s1<<"and"<<s2<<":";
    a=p.gethr();
    b=q.gethr();

    cout<<r.diff(max(a,b) , min(a,b));

    cout<<" hrs ";
    a=p.getmi();
    b=q.getmi();

    cout<<r.diff(max(a,b) , min(a,b));

    cout<<" minutes and ";

    a=p.getsec();
    b=q.getsec();

    cout<<r.diff(max(a,b) , min(a,b));

    cout<<" seconds ";

}
