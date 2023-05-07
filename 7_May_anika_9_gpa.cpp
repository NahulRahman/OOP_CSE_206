#include <bits/stdc++.h>
using namespace std;
class Attendance
{
public:
    int n;
    int * present;
    Attendance(int q)
    {
        n=q;
        present=new int[n];
    }
    void take_attendance()
    {
        for(int i=0;i<n;i++)
        {
            cout<<"if present press 1\nif absent press 0"<<endl;
            int f;
            cin>>f;
            present[i]=f;
        }
    }
    int cal()
    {
        int p=0;
        for(int i=0;i<n;i++)
        {
            if(present[i]==1)
            {
                p++;
            }
        }
        return p;
    }
    void dis()
    {

    }
};
int main()
{

    cout<<"Enter number of days:";
    int n;
    cin>>n;
    Attendance a(n);
    a.take_attendance();
    cout<<a.cal();
}



