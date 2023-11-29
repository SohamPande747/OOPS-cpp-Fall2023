#include <iostream>
#include <cmath>

using namespace std;

class Triangle
{
public: 
    int a;
    int b;
    int c;

    int area (int a, int b, int c)
    {
        int s = (a+b+c)/2;
        int ar = pow(((s)*(s-a)*(s-b)*(s-c)), 0.5);

        return ar;
    }

    int perimeter(int a, int b, int c)
    {
        return a+b+c;
    }
};

int main()
{
    Triangle t1;
    int a,b,c;

    cout << "Enter sides: ";
    cin >> a >> b >> c;

    cout << "Area: " << t1.area(a,b,c) << endl;
    cout << "Perimeter: " << t1.perimeter(a,b,c) << endl;

    return 0;
}