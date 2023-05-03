#include <bits/stdc++.h>
using namespace std;

#define fast_io()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

#define int long long // define int as a long long data type
#define endl '\n'

class point
{
public:
    int x;
    int y;
    point(int val1, int val2)
    {
        x = val1;
        y = val2;
    }
    point(const point &p1)
    {
        cout << "user defined " << endl;
        x = p1.x;
        y = p1.y;
    }
};
signed main()
{
    fast_io(); // enable faster I/O
    point p1(1, 2);
    point p2 = p1;
    cout << p1.x << p1.y << endl;
    cout << p2.x << p2.y << endl;

    return 0;
}