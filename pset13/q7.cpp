#include <iostream>

using namespace std;

class Cuboid
{
public:

    double length;
    double width;
    double height;

    Cuboid(double l, double b, double h)
    {
        length = l;
        width = b;
        height = h;
    }
    Cuboid()
    {
        length = 1;
        width = 1;
        height = 1;
    }
    void volume ()
    {
        double vol = length*width*height;
        cout << "Volume: " << vol << endl;
    }
};

int main()
{
    double l1,l2,l3;
    cout << "Dimensions of the first cuboid: ";
    cin >> l1 >> l2 >> l3;

    double l4,l5,l6;
    cout << "Dimensions of the second cuboid: ";
    cin >> l4 >> l5 >> l6;


    Cuboid c1(l1,l2,l3);
    Cuboid c2(l4,l5,l6);
    Cuboid c3;

    c1.volume();
    c2.volume();
    c3.volume();
}