#include <iostream>

using namespace std;

class Student
{
private:
	int id;
	string name;
public:
	void getstu()
	{
		cout << "Enter name: ";
		cin >> name;
		cout << "Enter id: ";
		cin >> id;
	}
	void putstu()
	{
		cout << "Name of student is: " << name << endl;
		cout << "Id of the student is: " << id << endl;

	}
};

class Marks : public Student
{
protected:
	int m1;
	int m2;
	int m3;
public:
	void getmarks()
	{
		cout << "Enter m1: ";
		cin >> m1;
		cout << "Enter m2: ";
		cin >> m2;
		cout << "Enter m3: ";
		cin >> m3;
	}
	void putmarks()
	{
		cout << "Marks m1 = " << m1 << endl;
		cout << "Marks m3 = " << m2 << endl;
		cout << "Marks m3 = " << m3 << endl;
	}
};

class Result : public Marks
{
private:
	int total;
	float avg;
public:
	void show()
	{
		total = m1+m2+m3;
		avg = (m1+m2+m3)/3;

		cout << "Total marks: " << total << endl;
		cout << "Average marks: " << avg << endl;

		return;
	}
};

int main ()
{
	Result r;
	r.getmarks();
	r.show();

	return 0;
}
