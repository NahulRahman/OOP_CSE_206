//thank you raisul
#include<iostream>
#include<cmath>
using namespace std;
class triangle{
public:
    double s1,s2,s3;
    void area(){
        double S=((s1+s2+s3)/2);
        cout<<sqrt(S*(S-s1)*(S-s2)*(S-s3));
    }
};
int main(){
    triangle p;
    double x,y,z;
    cin>>x>>y>>z;
    p.s1=x;
    p.s2=y;
    p.s3=z;
    p.area();
}
