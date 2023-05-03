#include <bits/stdc++.h>
using namespace std;

#define fast_io()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

#define int long long // define int as a long long data type
#define endl '\n'
class person
{
    string name;
    int age;

public:
    person(string n, int a)
    {
        name = n;
        age = a;
        cout << " creating objects" << endl;
    }
    void get_data()
    {
        cout << "name " << name << " age " << age << endl;
    }
};

signed main()
{
    fast_io(); // enable faster I/O
    person p("moon", 200);
    person p1 = p;

    p1.get_data();
    p.get_data();

    return 0;
}