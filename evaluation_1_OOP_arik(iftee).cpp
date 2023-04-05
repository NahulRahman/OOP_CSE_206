#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;

class Line
{
private:
    int p;
    string name;
    double length = 0;
    double* x;
    double* y;

public:
    Line()
    {
        cout << "Enter the number of points in the line: ";
        cin >> this->p;

        cout << "Enter the name of the line: ";
        cin >> this->name;

        x = new double[p];
        y = new double[p];

        cout << "Enter the coordinates of the points:\n";
        for (int i = 0; i < p; ++i)
        {
            cin >> x[i] >> y[i];
        }
    }

    string getName() { return this->name; }

    double calculate_length()
    {
        for (auto i = 0, j = 0; i < p - 1; ++i, ++j)
        {
            length += sqrt(pow((x[i + 1] - x[i]), 2) + pow((y[i + 1] - y[i]), 2));
        }
        cout << "Length of Line " << this->name << ": " << length << endl;
        return length;
    }

    ~Line()
    {
        delete[] x;
        delete[] y;
    }
};

int main()
{
    cout << "Enter the number of lines: ";
    int n;
    cin >> n;

    if (n <= 0)
    {
        cerr << "Invalid input: Number of lines should be a positive integer\n";
        return 1;
    }

    Line* l = new Line[n];
    string name[n];
    double line[n];

    for (int i = 0; i < n; ++i)
    {
        printf("\nLine %d:\n", i + 1);
        name[i] = l[i].getName();
        line[i] = l[i].calculate_length();
    }

    for (int i = 0; i < n-1; ++i)
    {
        if (line[i] > line[i+1])
        {
            swap(line[i], line[i+1]);
            swap(name[i], name[i+1]);
            i=-1;
        }
    }

    cout << "\nSorted lines by length:\n";
    for (int i = 0; i < n; ++i)
    {
        cout << name[i];
        if (i < n - 1) cout << "<";
    }

    delete[] l;

    return 0;
}
