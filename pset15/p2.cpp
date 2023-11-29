#include <iostream>

using namespace std;

int add (int a, int b)
{
	int sum = a+b;

	return sum;
}
int add (int a, int b, int c)
{
	int sum = a+b+c;

	return sum;
}
float add (float a, float b, float c)
{
	float sum =  a+b+c;

	return sum;
}

int main()
{
	int choice;
	cout << "Enter choice: ";
	cin >> choice;

	switch(choice)
	{
		case 1:
		{
			int num1, num2;
			cout << "Enter value of num1: ";
			cin >> num1;
			cout << "Enter value of num2: ";
			cin >> num2;
	
			cout << "Sum : " << add(num1,num2) << endl;
			break;
		}
		case 2:
		{
			int num1,num2,num3;
			cout << "Enter value of num1: ";
			cin >> num1;
			cout << "Enter value of num2: ";
			cin >> num2;
			cout << "Enter value of num3: ";
			cin >> num3;

			cout << "Sum : " << add(num1,num2,num3) << endl;
			break;
		}
		case 3: 
		{
			float num1,num2,num3;
			cout << "Enter value of num1: ";
			cin >> num1;
			cout << "Enter value of num2: ";
			cin >> num2;
			cout << "Enter value of num3: ";
			cin >> num3;
		
			cout << "Sum : " << add(num1,num2,num3) << endl;
			break;
		}
		default:
			cout << "Please enter a valid argument..." << endl;
	}
	return 0;
}
