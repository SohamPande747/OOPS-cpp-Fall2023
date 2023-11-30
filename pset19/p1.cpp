#include <iostream>
#include <exception>

using namespace std;

int main ()
{
	try 
	{
		double n,d,ans;

		cout << "Numerator value: ";
		cin >> n;
		cout << "Denominator value: ";
		cin >> d;

		if (d == 0)
		{
			throw runtime_error("Division by 0 is forbidden...");
		}
		ans = n/d;
		cout << "Result is: " << ans << endl;

	}
	catch (const runtime_error& e)
	{
		cout << "Error: " << e.what() << endl;
	}
	return 0;
}
