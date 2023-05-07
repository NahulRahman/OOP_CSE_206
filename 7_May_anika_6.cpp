#include<bits/stdc++.h>
using namespace std;
class Series
{
    int n;
public:
    void setn(int a)
    {
        n=a;
    }
    int getn()
    {
        return n;
    }
    void easy()
    {
        cout<<"First:"<<(n*(n+1)/2)<<endl;
    }
     void secondeasy()
    {
        cout<<"Second:"<<(2*n-1)*(2*n-1)<<endl;
    }
    void difficult()
    {
         //cout<<"Third:"<<(n*(n+1)/2)*(n*(n+1)/2)<<endl;
         int ss=0;
         for(int i=1;i<=n;i++)
         {
             ss+=(i*i*i);
         }
         cout<<ss<<endl;
    }
};
int main()
{
    int f;
    cin>>f;
    Series s;
    s.setn(f);
    s.easy();
    s.secondeasy();
    s.difficult();
}
