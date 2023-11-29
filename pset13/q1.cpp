#include <iostream>

using namespace std;

class Student
{
public:
    string name;
    int roll_no;
};

int main ()
{
    Student S1;
    S1.name = "John";
    // S1.roll_no = 2;

    cout << S1.name << endl;
    cout << S1.roll_no << endl;

    return 0;
}