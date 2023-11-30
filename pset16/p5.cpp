#include <iostream>

using namespace std;

class Employee
{
protected:
	int baseSalary;
	string name;
public: 
	Employee(const string& n, int sal) : name(n), baseSalary(sal) {}

	virtual double calSal() const = 0;
	virtual void printDetails() const = 0;

	virtual ~Employee() {}
};

class Manager : public Employee
{
private:
	double bonus;
public:
	Manager (const string& n, int sal, double b) : Employee(n,sal), bonus(b) {}

	double calSal() const override
	{
		return baseSalary + bonus;
	}

	void printDetails() const override
	{
		cout << "Manager Details.." << endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << baseSalary << endl;
		cout << "Bonus: " << bonus << endl;
		cout << "New salary: " << calSal() << endl;
	}

	virtual ~Manager() {}
};

class Programer : public Employee
{
private:
	int age;
public:
	Programer (const string& n, int sal, int a) : Employee(n, sal), age(a) {}

	double calSal() const override
	{
		return baseSalary + 50000;
	}

	void printDetails() const override
	{
		cout << "Programmer Details.." << endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << baseSalary << endl;
		cout << "Age: " << age << endl;
		cout << "New Salary: " << calSal() << endl;
	}

	virtual ~Programer() {}
};

int main()
{
	int count = 2;
	Employee* e[count];

	int choice;
	cout << "Enter a choice: ";
	cin >> choice;

	if (choice == 1)
	{
		cout << endl;

		e[0] = new Manager("Addhi", 125000, 25000);
		e[0]->calSal();
		e[0]->printDetails();

	}
	else if (choice == 2)
	{
		cout << endl;

		e[1] = new Programer("Soham", 225000, 25000);
		e[1]->calSal();
		e[1]->printDetails();
	}
	else
	{
		cout << "Invalid Input..." << endl;
	}

	for (int i = 0; i < count; i++)
	{
		delete e[i];
	}

	return 0;
}

