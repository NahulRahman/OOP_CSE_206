#include <bits/stdc++.h>

using namespace std;

class stackk
{
    int *p;
    int len;
    int t;

public:
    stackk()
    {
        len = 0;
        t = -1;
    }
    stackk(int n)
    {
        len = n;
        t = -1;
        p = new int[len];
    }
    ~stackk()
    {
        delete[] p;
    }
    void initstackk(int *arr)
    {
        for (int i = 0; i < len; i++)
        {
            p[i] = arr[i];
            t++;
        }
    }
    void printstackk()
    {
        for (int i = 0; i < len; i++)
        {
            cout << p[i] << " ";
        }
        cout << endl;
    }
    int ttop()
    {
        return p[t];
    }
    int gettop()
    {
        return t;
    }
    void ppop()
    {
        t--;
    }
};

int sum(stackk st)
{
    int s = 0;
    for (int i = st.gettop(); i >= 0; i--)
    {
        // cout<<st.ttop()<<endl;
        s +=st.ttop();
        st.ppop();
    }
    return s;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    stackk s1(5);
    s1.initstackk(arr);
    s1.printstackk();
    cout<<sum(s1)<<endl;
}
