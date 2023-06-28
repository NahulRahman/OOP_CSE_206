#include<bits/stdc++.h>
using namespace std;
class A{
 int a1;
 protected:
 int a2;
 public:
 string a3;
    A(int x,int y,string a){
        a1=x;
        a2=y;
        a3=a;
    }
    virtual int fa() = 0;
    virtual void display(){
	    cout<<a1<<" "<<a2<<" "<<a3<<endl;

    }
    int getA1()    {
        return a1;
    }
    int getA2(){
        return a2;
    }
    ~A(){}
};

class B:virtual public A{
    double b1;
protected:
    int b2;
private:
    int fb(){
       return b1+b2;
    }
public:
    B(int x,int y,string a, double b11,int b22):A(x,y,a){
        b1=b11;
        b2=b22;
    }
    int fa(){
        return getA1()+a2+b1+b2;
    }
    void  display(){
        cout<<"b1 "<<b1<<" b2 "<<b2<<endl;
    }
    int call_fb(){
        return fb();
    }
    ~B(){}
};

class C:virtual public B{
public:
    int c1;
    C(int x,int y,string a, double b11,int b22,int c11):B(x,y,a,b11,b22),A(x,y,a){
        c1=c11;
    }
    ~C(){}
};

class D:virtual public B{
 public:
     int d1;
     D(int x,int y,string a, double b11,int b22,int d11): B(x,y,a,b11,b22),A(x,y,a)   {
         d1=d11;
     }
     ~D(){}
};

class E:public C,public D{
 public:
     int e1;
     E(int x,int y,string a, double b11,int b22,int c11,int d11,int e11):C(x,y,a,b11,b22,c11), D(x,y,a,b11,b22,d11), B(x,y,a,b11,b22), A(x,y,a)   {
         e1=e11;
     }
     ~E(){}
};

class F: virtual public A{
 protected:
     float f1;
 public:
    F(float f11){
        f1=f11;
    }
    int ff(){
        return f1+getA1()+a2;
    }
    float getF1(){
        return f1;
    }
    ~F(){}
};

class G:public B,private F{
 public:
     char g;
    G(int x,int y,string a, double b11,int b22,float f11, char g1):B(x,y,a,b11,b22), F(f11), A(x,y,a){
          g=g1;
        }
        int ff(){
            int k=(int)g;
            return F::ff()+ k;   //confused here
        }
        ~G(){}
};

void display(A *obj){
    obj->display();
}

int main(){
    //A A1(1,2,"a");
    //create an object of class A

    B B1(1,2,"a",5.2,2);
    //create an object of class B

    C C1(1,2,"a",5.2,2,3);
    //create an object of class C

    G G1(1,2,"a",5.2,2,1.9,'e');
    //create an object of class G

    //G1.fb(); //make sure this works

    int m=G1.ff(); //implement this or use appropriate delegate function

    cout<<m<<endl;

//Then, make sure the following lines work, use appropriate techniques as necessary
    A * ptr;
    ptr = &B1;

    ptr->display();
}

