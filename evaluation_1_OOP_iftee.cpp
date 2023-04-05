#include <bits/stdc++.h>
using namespace std;
class Line
{
private:
    string name;
    int length;
    float *x_coordinates;
    float *y_coordinates;

public:
    Line()
    {
        name = "";
        length = 0;
        x_coordinates = new float[length];
        y_coordinates = new float[length];
    }
    Line(string n, int l, float *x, float *y)
    {
        name = n;
        length = l;
        x_coordinates = new float[length];
        y_coordinates = new float[length];
        for (int i = 0; i < length; i++)
        {
            x_coordinates[i] = x[i];
            y_coordinates[i] = y[i];
        }
    }

    float calCulateLength()
    {
        float sum = 0;
        for (int i = 0; i < length - 1; i++)
        {
            sum += sqrt(pow(x_coordinates[i + 1] - x_coordinates[i], 2) + pow(y_coordinates[i + 1] - y_coordinates[i], 2));
        }
        return sum;
    }
    string getName()
    {
        return name;
    }
    ~Line()
    {
        delete[] x_coordinates;
        delete[] y_coordinates;
    }
};
int main()
{
    int n;
    cout << "Number of lines: ";
    cin >> n;
    Line *lines = new Line[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        int length;
        cout << "Enter name of line: ";
        cin >> name;
        cout << "Enter length of line: ";
        cin >> length;
        float *x_coordinates = new float[length];
        float *y_coordinates = new float[length];
        for (int j = 0; j < length; j++)
        {
            cin >> x_coordinates[j] >> y_coordinates[j];
        }
        lines[i] = Line(name, length, x_coordinates, y_coordinates);
    }
    for (int i = 0; i < n; i++)
    {
        cout << "Length of " << lines[i].getName() << " " << lines[i].calCulateLength() << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; i++)
        {
            if (lines[j].calCulateLength() > lines[j + 1].calCulateLength())
            {
                swap(lines[j], lines[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1)
        {
            cout << lines[i].getName() << " ";
        }
        else
        {
            cout << lines[i].getName() << " < ";
        }
    }
}
