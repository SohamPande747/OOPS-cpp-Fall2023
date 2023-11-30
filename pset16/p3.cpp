#include <iostream>

using namespace std;

class Vehicle
{
public:
	virtual void accelerate() const
	{
		cout << "Generic acceleration..." << endl;
	}
	virtual void brake() const
	{
		cout << "Generic braking movement..." << endl;
	}
};

class Car : public Vehicle
{
public:
	void accelerate() const override
	{
		cout << "Car goes stustutututu..." << endl;
	}
	void brake() const override
	{
		cout << "Car brakes ratatata..." << endl;
	}
};

class Bicycle : public Vehicle
{
public:
	void accelerate() const override
	{
		cout << "Bike goes fast..." << endl;
	}
	void brake() const override
	{
		cout << "Bike is braking..." << endl;
	}
};

int main ()
{
	int choice;
	const int numVehicles = 2;

	Vehicle *vehicles[numVehicles];

	cout << "Enter your choice...";
	cin >> choice;
	if (choice == 1)
	{
		vehicles[0] = new Car;
		vehicles[0]->accelerate();
		vehicles[0]->brake();
	}
	else if (choice == 2)
	{
		vehicles[1] = new Bicycle;
		vehicles[1]->accelerate();
		vehicles[1]->brake();
	}
	else
	{
		cout << "Enter a valid value macha.." << endl;
	}

	for (int i = 0; i < numVehicles; i++)
	{
		delete vehicles[i];
	}
	return 0;
}
