#include <iostream>

using namespace std;

class complex
{
public:
    int real;
    int im;

    void setValues()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> im;

        return;
    }

    void sum(complex c1, complex c2)
    {
        int rSum = c1.real + c2.real;
        int iSum = c1.im + c2.im;

        cout << rSum << "+ i" << iSum << endl;

        return;
    }
    void difference(complex c1, complex c2)
    {
        int rDiff = c1.real - c2.real;
        int iDiff = c1.im - c2.im;

        cout << rDiff << iDiff << "i" << endl;

        return;
    }
    void multiply(complex c1, complex c2)
    {
        int rMult = (c1.real * c2.real) + (c1.im * c2.im);
        int iMult = (c1.real * c2.im) + (c1.im * c2.real);

        cout << rMult << " + i" << iMult << endl;
    }
};

int main ()
{
    complex c1, c2, result;

    c1.setValues();
    c2.setValues();

    result = sum(c1, c2);

    // cout << "Sum: " << sum(c1, c2);
    // cout << "Difference: " << difference(c1,c2);
    // cout << "Multiplication: " << multiply(c1,c2);

    return 0;
}