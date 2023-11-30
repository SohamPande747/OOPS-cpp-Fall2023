#include <iostream>

using namespace std;

class Complex 
{
private:
	int re;
	int im;
public:
	void getData()
	{
		cout << "Enter value of real part: ";
		cin >> re;
		cout << "Enter value of imaginary part: ";
		cin >> im;
	}
	friend void addComplex(Complex c1, Complex c2)
	{
		int reAns = c1.re + c2.re;
		int imAns = c1.im + c2.im;

		cout << "The sum of complex number is: " << reAns << " + i" << imAns << endl;
	}
	friend void subComplex(Complex c1, Complex c2)
	{
		int reAns = c1.re - c2.re;
		int imAns = c1.im - c2.im;

		cout << "The difference of complex number is: " << reAns << " - i" << imAns << endl;
	}
};

int main ()
{
	Complex c;
	Complex d;

	c.getData();
	d.getData();

	addComplex(c,d);
	subComplex(c,d);

	return 0;
}
