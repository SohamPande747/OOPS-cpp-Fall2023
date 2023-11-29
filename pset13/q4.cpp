#include <iostream>

using namespace std;

class months
{
public:
    int month;

    void getData()
    {
        cout << "Enter month number: ";
        cin >> month;
    }

    void days(months m1)
    {
        if (m1.month <= 12)
        {
            if (m1.month == 1 || m1.month == 3 || m1.month == 5 || m1.month == 7 || m1.month == 8 || m1.month == 10 || m1.month == 12)
            {
                cout << "31" << endl;
            }
            else if (m1.month == 2)
            {
                cout << "28" << endl;
            }
            else 
            {
                cout << "30" << endl;
            }
        }
        else
        {
            cout << "Smoke less weed..." << endl;
        }
    }
};

int main()
{
    months m1;
    m1.getData();
    m1.days(m1);
}