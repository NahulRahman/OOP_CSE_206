#include <bits/stdc++.H>
using namespace std;

class Complex
{
	int real, im;

public:
	Complex()
	{
		real = 0;
		im = 0;
	}
	void setreal(int m)
	{
		real = m;
	}
	void setim(int n)
	{
		im = n;
	}
	int getreal()
	{
		return real;
	}
	int getim()
	{
		return im;
	}
};

void add(Complex c1, Complex c2)
{
	int s1 = c1.getreal() + c2.getreal();
	int s2 = c1.getim() + c2.getim();
	cout << "Sum is: " << s1 << " " << s2 << endl;
}

void sub(Complex c1, Complex c2)
{
	int s1 = c1.getreal() - c2.getreal();
	int s2 = c1.getim() - c2.getim();
	cout << "Sum is: " << s1 << " " << s2 << endl;
}

int main()
{
	Complex c1, c2;
	c1.setreal(2);
	c1.setim(3);
	c2.setreal(5);
	c2.setim(1);
	add(c1, c2);
	sub(c1, c2);
}
