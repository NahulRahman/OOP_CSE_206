/*
Number of points in Line 1: 3
Enter coordinates:
1 1
2 2
3 4
Number of points in Line 2: 2
Enter coordinates:
0 0
5.2 5.6

Length of Line 1: 3.65028
Length of Line 2: 7.64199
Line 2 > Line 1 */
#include<iostream>
#include<cmath>
using namespace std;
class line{
    double x;
    double y;
public:
    line(){
          x=0;
          y=0;
      }
      void setx(float a){
          x=a;
      }
      void sety(float b){
          y=b;
      }
      double getx(){
          return x;
      }
      double gety(){
          return y;
      }
       double calculate_length(double p,double q,double r,double s){
           double len=sqrt(((p-r)*(p-r))+((q-s)*(q-s)));
           return len;
       }
      double ip(){
                int n;
                cin>>n;
                line p[n],q[n],l;
                cout<<"Enter coordinates: "<<endl;
                for(int i=0;i<n;i++){
                    double x,y;
                    cin>>x>>y;
                    p[i].setx(x);
                    q[i].sety(y);
	}
        double len=0;
	for(int i=0;i<n-1;i++){
        len=len + l.calculate_length(p[i].getx(),q[i].gety(),p[i+1].getx(),q[i+1].gety());
	}return len;
}
    ~line(){

      }
};
int main(){
    line();
    line x;
    cout<<"Number of points in Line 1:";
    double a=x.ip();
    cout<<"Number of points in Line 2:";
    double b=x.ip();
    cout<<"Length of line 1:"<<a<<endl;
    cout<<"Length of line 2:"<<b<<endl;
    if(a>b) cout<<"Line 1>Line 2"<<endl;
    else cout<<"Line 2>Line 1"<<endl;
}
