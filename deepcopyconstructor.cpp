#include <bits/stdc++.h>
using namespace std;

#define fast_io()                     \
    ios_base::sync_with_stdio(false); \
    cin.tie(nullptr);                 \
    cout.tie(nullptr)

#define int long long // define int as a long long data type
#define endl '\n'
class myclass
{
public:
    int *arr;
    int size;

public:
    myclass(){};
    myclass(const myclass &obj)
    {
        size = obj.size;
        arr = new int[size];
        for (int i = 0; i < size; i++)
        {
            arr[i] = i;
        }
    }
};

signed main()
{
    fast_io(); // enable faster I/O
    myclass obj1;
    obj1.size = 5;
    obj1.arr = new int[obj1.size];
    for (int i = 0; i < obj1.size; i++)
    {
        obj1.arr[i] = i;
    }
    myclass obj2 = obj1;
    obj1.arr[0] = 100;
    cout << obj2.arr[0] << endl;
    cout << obj1.arr[0] << endl;

    return 0;
}