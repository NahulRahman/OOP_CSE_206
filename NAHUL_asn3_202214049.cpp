/* Calculations of given functions

monthlyPayment ():
r = r / 12.0
c = pow (1.0 + r, n) - 1.0
return (P * r) / c

totalPayments ():
return monthly_payment*n

monthlySavings ():
r= r / 12.0.
c = pow (1.0 + r, n) - 1.0
return P / ((pow (1.0 + r, n) - 1.0) / r) * c

totalSavings():
return monthly_savings * n * 12.0


namespaces

“Financial”.
“Mortgage”
“Retirement”.
“Mortgage”
*/

#include<iostream>
#include<cmath>
using namespace std;
namespace Financial{

    namespace Mortgage{
        double monthlyPayment(double r,double n,double P){
            r = r / 12.0;
            double c = pow (1.0 + r, n) - 1.0;
            return (P * r) / c;
        }
        double totalPayments(double monthly_payment,double n){
            return monthly_payment*n;
        }
    }

    namespace Retirement{
        double monthlySavings (double r,double n,double P){
            r= r / 12.0;
            double c = pow (1.0 + r, n) - 1.0;
            return P / ((pow (1.0 + r, n) - 1.0) / r) * c;
        }
        double totalSavings(double monthly_savings, double n){
            return monthly_savings*n*12.0;
        }
    }
}
int main()
{
    double p,n,r;
    cout<<"Enter Principal Amount: ";
    cin>>p;
    cout<<"Enter Interest Rate: ";
    cin>>r;
    cout<<"Enter Number of Periods: ";
    cin>>n;
    double w = Financial::Mortgage::monthlyPayment(r,n,p);
    double x = Financial::Mortgage::totalPayments(w,n);
    cout<<"Total mortgage payment: "<<x<<endl;
    double y = Financial::Retirement::monthlySavings(r,n,p);
    double z = Financial::Retirement::totalSavings(y,n);
    cout<<"Total retirement savings: "<<z<<endl;
}

/*
Enter Principal Amount: 200000
Enter Interest Rate: 0.03
Enter Number of Periods: 30
Total mortgage payment: 192844
Total retirement savings: 180000

Process returned 0 (0x0)   execution time : 13.735 s
Press any key to continue.

*/
