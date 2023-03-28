#include<iostream>
using namespace std;

class complex{
   int a;int b;
     friend complex sum_complex(complex o1,complex o2);
   public:
   void setnumber(int a1, int b1){
    a=a1;
    b=b1;
   }

   void printnumber(void){
    cout<< "the complex number is "<< a << " + " <<b<<"i"<<endl;
   }

};
    complex sum_complex(complex o1,complex o2){
      complex o3;
      o3.setnumber((o1.a+o2.a),(o1.b+o2.b));

      return o3;
    }
int main(){
  complex c1,c2,sum;
  c1.setnumber(4,2);
  c1.printnumber();

  c2.setnumber(1,3);
  c2.printnumber();

  sum=sum_complex(c1,c2);
  sum.printnumber();

  return 0;
}
