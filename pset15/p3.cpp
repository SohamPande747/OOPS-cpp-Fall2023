#include <iostream>

using namespace std;

int factorial (int num)
{
	int fact = 1;
	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}

int factorial (double num)
{
	int fact = 1;
	for (int i = 1; i <= num; i++)
	{
		fact *= i;
	}
	return fact;
}

int main()
{
	int i;
	double d;

	cout << "Enter the integer: ";
	cin >> i;
	cout << "Enter the double: ";
	cin >> d;

	cout << "Factorial is: " << factorial(i) << endl;
	cout << "Factorial is: " << factorial(d) << endl;

	return 0;
}


