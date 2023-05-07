#include<bits/stdc++.h>
using namespace std;
class Science
{
    int roll;
    int mark_p;
    int mark_s;
};
class Commerce
{
    int roll;
    int mark_p;
    int mark_s;
};
void Compare(Science s1,Commerce s2)
{
    if(s1.marks>s2.marks)
    {
        return s1.getroll;
    }
    else
    {
        return s2.roll;
    }
}
int main()
{
    Science s1;
    Commerce s2;
    Compare(s1,s2);
}
