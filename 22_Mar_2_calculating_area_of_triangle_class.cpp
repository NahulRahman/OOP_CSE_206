#include<iostream>
#include<cmath>
using namespace std;
class point{
public:
    double x;
    void print(point s1,point s2,point s3){
        double S=((s1.x+s2.x+s3.x)/2);
        cout<<sqrt(S*(S-s1.x)*(S-s2.x)*(S-s3.x));
    }

};
int main(){
    point s,s1,s2,s3;
    double x;
    cin>>x;
    s1.x=x;
    cin>>x;
    s2.x=x;
    cin>>x;
    s3.x=x;
    s.print(s1,s2,s3);

}
