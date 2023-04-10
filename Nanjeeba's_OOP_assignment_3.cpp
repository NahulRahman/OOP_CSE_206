#include<bits/stdc++.h>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
namespace Financial
{
    namespace Mortgage
    {
        double monthlyPayment(double r,double n,double P)
        {
            r = r / 12.0;
            double c = pow (1.0 + r, n) - 1.0;
            return (P * r) / c;
        }
        double totalPayments(double m,double n)
        {
            return m*n;
        }
    }
    namespace Retirement
    {
        double monthlySavings (double r,double n,double P)
        {
            r= r / 12.0;
            double c = pow (1.0 + r, n) - 1.0;
            return P / ((pow (1.0 + r, n) - 1.0) / r) * c;
        }
        double totalSavings(double m, double n)
        {
            return m*n*12.0;
        }
    }
}
int main()
{
    double p,n,r;
    cout<<"Enter principal Amount: ";
    cin>>p;
    cout<<"Enter Interest Rate: ";
    cin>>r;
    cout<<"Enter Number of periods: ";
    cin>>n;
    double a = Financial::Mortgage::monthlyPayment(r,n,p);
    double b = Financial::Mortgage::totalPayments(a,n);
    cout<<"Total mortgage payment: "<<b<<"\n";
    double c = Financial::Retirement::monthlySavings(r,n,p);
    double d = Financial::Retirement::totalSavings(c,n);
    cout<<"Total retirement savings: "<<d<<"\n";
}
