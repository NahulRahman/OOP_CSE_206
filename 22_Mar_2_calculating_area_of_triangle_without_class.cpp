#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double s,s1,s2,s3;
    cin>>s1>>s2>>s3;
    s=((s1+s2+s3)/2);
    cout<<sqrt(s*(s-s1)*(s-s2)*(s-s3));
    return 0;
}
