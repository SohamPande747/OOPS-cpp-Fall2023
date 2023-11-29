#include <iostream>

using namespace std;

class Series
{
private:
	int a;
	int d;
	int n;
public:
	void getData()
	{
		cout << "First term: ";
		cin >> a;
		cout << "Common Difference: ";
		cin >> d;
		cout << "Number of terms: ";
		cin >> n;
	}
	friend void sumofAP (Series s1)
	{
		int sn = ((2 * s1.a ) + ((s1.n - 1) * s1.d)) * s1.n / 2;

		cout << "Sum of AP is : " << sn << endl;
	}
};

int main ()
{
	Series s;
	s.getData();

	sumofAP(s);
	return 0;
}
