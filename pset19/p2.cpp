#include <iostream>
#include <exception>
#include <cctype>

using namespace std;

int main()
{
	try
	{
		char a,b;
		int res;

		cout << "Enter first number: ";
		cin >> a;
		//cout << (int) a;
		cout << "Enter second number: ";
		cin >> b;

		if (isdigit(a) && isdigit(b))
		{
			res = (int) a - 48 + (int) b - 48;
			cout << "Sum: " << res << endl;
		}
		else
		{
			throw invalid_argument ("Please enter an integer...");
		}
	}

	catch (const invalid_argument& e)
	{
		cerr << "Error: " << e.what() << endl;
	}
}

