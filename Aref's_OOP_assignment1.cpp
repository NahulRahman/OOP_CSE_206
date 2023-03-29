#include<bits/stdc++.h>
using namespace std;
float atten(int a)
{
    ///Attendece_Mark_count
    float k =  ((float)a/42)*15;
    if(k>=0) return k;
    return 0;
}

float per(float a,int b)
{
    ///Performance_mark_count
    float f =   (((a/30)*15) - (42-b));
    if(f<0) return 0;
    return f;
}

void grade(float a,int b,string c)
{
    if(a>=240) cout<<b<<" Attained the grade: "<<'A'<<" in "<<c<<" with total marks (out of 300): "<<a<<"\n\n";
    else if (a>=200) cout<<b<<" Attained the grade: "<<'B'<<" in "<<c<<" with total marks (out of 300): "<<a<<"\n\n";
    else if(a>=160) cout<<b<<" Attained the grade: "<<'C'<<" in "<<c<<" with total marks (out of 300): "<<a<<"\n\n";
    else if(a>=120) cout<<b<<" Attained the grade: "<<'D'<<" in "<<c<<" with total marks (out of 300): "<<a<<"\n\n";
    else if(a<120) cout<<b<<" Attained the grade: "<<'F'<<" in "<<c<<" with total marks (out of 300): "<<a<<"\n\n";
}

float best2(float a,float b, float c)
{
    ///Best_2_CT_Marks
    float s = a+b+c, m = min(a,min(b,c));
    float sum = s - m;
    return (sum/40)*60;
}
int main()
{
    int roll,p_day;
    string code;
    float ct1,ct2,ct3,mid,a,b;
    cout<<"Enter Roll : ";
    cin>>roll;
    cout<<"\nEnter Course code: ";
    cin>> code;
    cout<<"\nEnter Number Of classes present in (out of 42) : ";
    cin>> p_day;
    cout<<"\nEnter CT 1 marks (out of 20, will be converted to 30): ";
    cin>>ct1;
    cout<<"\nEnter CT 2 marks (out of 20, will be converted to 30): ";
    cin>>ct2;
    cout<<"\nEnter CT 3 marks (out of 20, will be converted to 30): ";
    cin>>ct3;
    cout<<"\nEnter Mid marks (out of 30): ";
    cin>>mid;
    cout<<"\nEnter Final(Sec A) Marks (out of 90): ";
    cin>>a;
    cout<<"\nEnter Final(Sec B) Marks (out of 90): ";
    cin>>b;

    cout<<"\n\n\nAfter calculation\n\n";

    float att = atten(p_day);
    cout<<"Attendence Mark : "<<att<<"\n\n";

    float p = per(mid,p_day);
    cout<<"Performance Mark: "<<p<<"\n\n";

    float c = best2(ct1,ct2,ct3);
    cout<<"Best 2 CT Mark (out of 60): "<<c<<"\n\n";

    float res = c + p + att + mid + a + b;
    cout<<"Total (out of 300): "<<res<<"\n\n";

    grade(res,roll,code);

    cout<<"Program Terminated. Press Enter to Close\n";

    return 0;

}


