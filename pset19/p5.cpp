#include <iostream>
#include <exception>

using namespace std;

bool digit (const string& str)
{
	int flag = 0;

	for (int i = 0; i < str.length(); i++)
	{
		if (isdigit(str[i]))
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
		return true;
	}
	return false;
}

void check (const string& str)
{
	if (str.length() < 6)
	{
		throw runtime_error("Lengh less than 6 is invalid");
	}
	if (!digit(str))
	{
		throw runtime_error("Does not contain digit");
	}
}

int main()
{
	try
	{
		string usrName;
		string pswd;

		cout << "Enter user name: ";
		cin >> usrName;
		cout << "Password: ";
		cin >> pswd;

		check(pswd);

	}

	catch (const exception& e)
	{
		cerr << "Error: " << e.what() << endl;
	}
}

