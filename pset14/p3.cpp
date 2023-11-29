#include <iostream>

using namespace std;

class Pyramid
{
private: 
	int height;
public: 
	void getData()
	{
		cout << "Enter height: ";
		cin >> height;
	}
	friend void printData (Pyramid p)
	{
		if (p.height <= 26 && p.height > 0)
		{
			for (int i = 0; i < p.height; i++)
			{
				for (int j = p.height-i-1; j > 0; j--)
				{	
					cout << " ";
				}
				for (int j = 65; j < i+65; j++)
				{
					printf("%c", j);
				}
				for (int j = 65+i; j >= 65; j--)
				{
					printf("%c", j);
				}
				cout << endl;
			}
		}
		else
		{
			cout << "26 se jyada alphabets abba chhod ke gaye the kya bc..." << endl;
		}
	}
};

int main ()
{
	Pyramid Giza;
	Giza.getData();
	printData(Giza);

	return 0;
}
