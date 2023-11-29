#include <iostream>

using namespace std;

class Money
{
public: 
    int amount;
    int notes[8] = {500,100,50,20,10,5,2,1};
    int count[8];

    void getValues()
    {
        cout << "Enter the amount: ";
        cin >> amount;
    }

    void calc (Money m1)
    {
        int i = 0;
        while (m1.amount > 0)
        {
            m1.count[i] = m1.amount / m1.notes[i];
            amount = amount%m1.notes[i];
            cout << m1.notes[i] << " = " << m1.count[i] << endl;
            i++;
        }
    }
};

int main()
{
    Money m;

    m.getValues();
    m.calc(m);
}