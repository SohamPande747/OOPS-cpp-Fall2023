#include <iostream>
#include <cstring>

using namespace std;

class String 
{
private:
	char *str1;
public:
	String ()
	{
		str1 = nullptr;
	}

	String (char *s)
	{
		str1 = new char [strlen(s) + 1];
		strcpy(str1,s);
	}

	String (const String &s)
	{
		str1 = new char [strlen(s.str1) + 1];
		strcpy(str1,s.str1);
	}

	String operator +(String s)
	{
		String temp;
		temp.str1 = new char[strlen(str1) + strlen(s.str1) + 1];
		strcpy(temp.str1, str1);
		strcat(temp.str1, s.str1);

		return temp;
	}

	void display()
	{
		cout << "The concatenated strings are: " << str1 << endl;
	}
};

int main ()
{
	char s1[100], s2[100] ;
	String str1,str2,result;

	cout << "Enter first string: ";
	cin.getline(s1,100);
	cout << "Enter second string: ";
	cin.getline(s2,100);

	str1 = String(s1);
	str2 = String(s2);

	result = str1+str2;

	result.display();

	return 0;
}
