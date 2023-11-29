#include <iostream>
#include <cmath>

using namespace std;

double area (int radius)
{
	double area = 3.14 * pow(radius,2);

	return area;
}

double area (int length, int width)
{
	double area = length * width;

	return area;
}

double area (int a, int b, int c)
{
	if (a+b > c && b+c > a && a+c > b)
	{
		int s = (a+b+c)/2;
		double area = pow ((s*(s-a)*(s-b)*(s-c)),0.5);
		return area;
	}
	return 0;
}

int main ()
{	
	char choice;

	cout << "Enter choice: ";
	cin >> choice;

	switch (choice)
	{
		case 'c':
			double radius;
			cout << "Enter radius: ";
			cin >> radius;
			cout << "Area of circle: " << area(radius) << endl;
			break;
		case 'r':
			double len, width;
			cout << "Enter length: ";
			cin >> len;
			cout << "Enter width: ";
			cin >> width;
			cout << "Area of Rectangle is: " << area(len, width) << endl;
			break;
		case 't': 
			double a,b,c;
			cout << "Enter first side: ";
			cin >> a;
			cout << "Enter second side: ";
			cin >> b;
			cout << "Enter third side: ";
			cin >> c;
			cout << "Area of Triangle is : " << area (a,b,c) << endl;
			break;
	}

	return 0;
}
