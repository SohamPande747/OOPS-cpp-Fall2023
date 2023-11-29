#include <iostream>

using namespace std;

class Employee 
{
private:
	int id;
	string name;
public:
	void getData()
	{
		cout << "Enter employee id: ";
		cin >> id;
		cout << "Enter employee name: ";
		cin >> name;
	}
	void putData()
	{
		cout << "Employee name: " << name << endl;
		cout << "Employee id: " << id << endl;
	}
};

class Department : public Employee
{
private:
	string department;
public: 
	void getDepartment()
	{
		cout << "Enter department name: ";
		cin >> department;
	}
	void putDepartment()
	{
		cout << "Department name: " << department << endl;
	}
};

class PF : public Employee
{
private: 
	int pfAmount;
public:
	void getAmount()
	{
		cout << "Enter pf amount: ";
		cin >> pfAmount;
	}
	void dispPF()
	{
		cout << "PF amount is: " << pfAmount << endl;
	}
};

int main()
{
	Employee e1;
	e1.getData();

	Department d1;
	d1.getDepartment();

	PF p1;
	p1.getAmount();

	e1.putData();
	d1.putDepartment();
	p1.dispPF();

	return 0;
}
