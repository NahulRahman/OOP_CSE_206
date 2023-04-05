 ///202214075 -- Nahidur Zaman

#include<bits/stdc++.h>

using namespace std;

class line{
  float  x;
  float  y;
  public:
      line()
      {
          x=0;
          y=0;
      }
      float  getx()
      {
          return x;
      }
      float gety()
      {
          return y;
      }
      void setx(float a)
      {
          x=a;
      }
      void sety(float b)
      {
          y=b;
      }
       float cal_length(float a,float b,float c,float d)
       {
           float len= sqrt(((a-c)*(a-c))+((b-d)*(b-d)));
           return len;
       }


       ///input---->>>
       float  input()
       {

	int n;
	cin>>n;
	line p[n],q[n],l;
	cout<<"Enter coordinates: "<<endl;
	for(int i=0;i<n;i++)
	{
	    float x,y;
	    cin>>x>>y;
	    p[i].setx(x);
	    q[i].sety(y);

	}
	float len=0;
	for(int i=0;i<n-1;i++)
	{
        len=len + l.cal_length(p[i].getx(),q[i].gety(),p[i+1].getx(),q[i+1].gety());
	}
	return len;
       }

     ///Destruction--->>>
      ~line()
      {

      }
};

int main()
{
    line();
    ///line 1-->
    line x;
     cout<<"Number of points in Line 1:";
    float L1 = x.input();
     cout<<"Number of points in Line 2:";
    float L2 = x.input();

    cout<<"Length of line 1:"<<L1<<"\n";
     cout<<"Length of line 2:"<<L2<<"\n";
     if(L1>L2) cout<<"Line 1>Line 2"<<"\n";
     else cout<<"Line 2>Line 1"<<"\n";



}
