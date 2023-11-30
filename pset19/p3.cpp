#include <iostream>
#include <exception>

using namespace std;
		
bool vowel (const string& word)
{
	int flag = 0;

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] == 'a' || word[i] == 'A' || word[i] == 'e' || word[i] == 'E' || word[i] == 'i' || word[i] == 'I' ||
			word[i] == 'o' || word[i] == 'O' || word[i] == 'u' || word[i] == 'U')
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
void length (const string& word)
{
	if (word.length() < 7)
	{
		throw runtime_error("String length < 7");
	}
	if (!vowel(word))
	{
		throw runtime_error("String does not contain a vowel");
	}
}
int main ()
{
	try
	{
		string str;

		cout << "Enter a string: ";
		cin >> str;
		length(str);
	}

	catch (const exception& e)
	{
		cerr << "Error: " << e.what() << endl;
	}
}

