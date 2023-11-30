#include <iostream>

using namespace std;

class Shape 
{
public:
	virtual double calcArea() const = 0;

	virtual double calcPerimeter () const = 0;
};

class Rectangle : public Shape
{
private:
	double length;
	double width;
public:
	Rectangle (double l, double w) : length(l), width(w) {}

	double calcArea() const override
	{
		return length*width;
	}
	double calcPerimeter() const override
	{
		return 2*(length+width);
	}
};

class Circle : public Shape
{
private:
	double rad;
public:
        Circle (double r) : rad(r) {}

	double calcArea() const override
	{
		return 3.14*rad*rad;
	}
	double calcPerimeter() const override
	{
		return 2*3.14*rad;
	}
};

int main()
{
	const int count = 2;

	Shape* shapes[count];

	int choice;

	cout << "Enter choice: ";
	cin >> choice;

	if (choice == 1)
	{
		double l, b;
		cout << "Enter length: ";
		cin >> l;
		cout << "Enter width: ";
		cin >> b;

		shapes[0] = new Rectangle(l,b);
		cout << "Area is: " << shapes[0]->calcArea() << endl;
		cout << "Perimeter is: " << shapes[0]->calcPerimeter() << endl;
	}
	else if (choice == 2)
	{
		double r;
		cout << "Enter Radius: ";
		cin >> r;
		shapes[1] = new Circle(r);
		cout << "Area is: " << shapes[1]->calcArea() << endl;
		cout << "Perimeter is: " << shapes[1]->calcPerimeter() << endl;
	}
	else
	{
		cout << "Enter a valid argument..." << endl;
	}

	for (int i = 0; i < count; i++)
	{
		delete shapes[i];
	}

	return 0;
}
