#include <iostream>

using namespace std;

class Time
{
private:
	int hour;
	int min;
	int sec;

public: 
	Time()
	{
		hour = 0;
		min = 0;
		sec = 0;
	}

	Time(int h, int m, int s)
	{
		h = hour;
		m = min;
		s = sec;
	}
	
	void getData()
	{
		cout << "Enter hours: ";
		cin >> hour;
		cout << "Enter minutes: ";
		cin >> min;
		cout << "Enter seconds: ";
		cin >> sec;
	}

	bool operator >(Time t)
	{
		if (hour > t.hour)
		{
			return true;
		}
		else if (hour == t.hour && min > t.min)
		{
			return true;
		}
		else if (hour == t.hour && min == t.min && sec > t.sec)
		{
			return true;
		}
		return false;
	}

	bool operator <(Time t)
	{
		if (hour < t.hour)
		{
			return true;
		}
		else if (hour == t.hour && min < t.min)
		{
			return true;
		}
		else if (hour == t.hour && min == t.min && sec < t.sec)
		{
			return true;
		}
		return false;
	}

	bool operator ==(Time t)
	{
		if (hour == t.hour && min == t.min && sec == t.sec)
		{
			return true;
		}
		return false;
	}
};

int main ()
{

	Time t1, t2;

	t1.getData();
	t2.getData();

	if (t1 > t2)
	{
		cout << "Time 1 is greater than time 2" << endl;
	}

	else if (t1 < t2)
	{
		cout << "Time 1 is lesser than time 2" << endl;
	}

	else 
	{
		cout << "Time 1 is equal to time 2" << endl;
	}
}
