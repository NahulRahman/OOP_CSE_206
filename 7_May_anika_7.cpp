#include<bits/stdc++.h>
using namespace std;
class Library
{
    int Data_Structure;
    int algorithm;
    public:
    int getdata()
    {
        return Data_Structure;
    }
     int getalgorithm()
    {
        return algorithm;
    }
    int add(int data_structure,int algorithm)
    {
        int f=data_structure+algorithm;

       //cout<<"anika";
        return f;
       // cout<<"anika";
    }

};
int main()
{
    Library l;
    int a,b;
    cin>>a>>b;
    int book_count=l.add(a,b);
    cout<<book_count<<endl;
   if(book_count<2)
   {
       cout<<"WARNING shown"<<endl;
   }
   else if(book_count==0)
   {
       cout<<"Book cannot be issued"<<endl;
   }
   else
   {
       cout<<"Book can be issued"<<endl;
   }

}
