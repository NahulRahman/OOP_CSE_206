#include<iostream>
using namespace std;
int x=10;
int main(){
    int x=10;
    cout<<"value of local x : "<<x<<endl;
    cout<<"value of local x : "<<::x<<endl;
    return 0;
}
