#include <iostream>

using namespace std;

class Number
{
protected:
	int number;
public:
	void getNum()
	{
		cout << "Enter a number: ";
		cin >> number;
	}
};

class Factorial : public Number
{
public:
	int factorial (Number n)
	{
		int fact = 1;
		for (int i = 1; i <= number; i++)
		{
			fact *= i;
		}
		return fact;
	}
	void display (Number n)
	{
		cout << "Factorial is: " << factorial(n) << endl;

		return;
	}
};

int main ()
{
	Factorial f1;
	f1.getNum();
	f1.display(f1);

	return 0;
}

