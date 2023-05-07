#include<bits/stdc++.h>
using namespace std;
class Complex
{
    float real,imaginary;
public:
    void setreal(float r)
    {
        real=r;

    }
      void setimaginary(float i)
    {
        imaginary=i;

    }

    float getreal()
    {
        return real;
    }
    float getimaginary()
    {
        return imaginary;
    }


};
Complex add(Complex n1,Complex n2)
{
    Complex temp;
    temp.setreal(n1.getreal()+n2.getreal());
    temp.setimaginary(n1.getimaginary()+n2.getimaginary());
    return temp;
}
/*Complex sub(Complex n1,Complex n2)
{
    Complex temp;
    temp.real=n1.real-n2.real;
    temp.imaginary=n1.imaginary-n2.imaginary;
    return temp;
}*/

int main()
{
    float m,n;
    cout<<"Enter first complex number:";
    cin>>m>>n;
    Complex n1,n2,result,res;
    n1.setreal(m);
    n1.setimaginary(n);
    //cin>>n1.setreal()>>n1.setimaginary();
    cout<<"Enter second complex number:";
    cin>>m>>n;
    n2.setreal(m);
    n2.setimaginary(n);
    result=add(n1,n2);
    //res=sub(n1,n2);
    cout<<result.getreal()+result.getimaginary()<<endl;
    //cout<<res.real+res.imaginary<<endl;

}
