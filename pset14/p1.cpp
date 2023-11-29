#include <iostream>

using namespace std;

class Circle 
{
private:
	int radius;
public:
	void getData()
	{
		cout << "Enter radius: ";
		cin >> radius;
	}
	friend float area (Circle c)
	{
		float ar = 3.14 * c.radius * c.radius;

		return ar;
	}
};
int main ()
{
	Circle c1;

	c1.getData();

	cout << "Area of the circle is: " << area(c1) << endl;

	return 0;
}

