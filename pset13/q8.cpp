#include <iostream>

using namespace std;

class Pyramid
{
    int height;
    
    public:
    void get_height()
    {
        cout << "Enter the height of pyrmamid: ";
        cin >> height;
    }
    
    friend void printPyramid(Pyramid p1)
    {
        int h = p1.height;
        
        if (h > 0 && h <=26)
        {
            for (int i = 0; i < h; i++)
            {
                for (int j = h-i-1; j > 0; j--)
                {
                    cout << "  ";
                }
                for (int j = 65; j < 65+i; j++)
                {
                    printf("%c ", j);
                }
                for (int j = 65 + i; j >= 65; j--)
                {
                    printf("%c ", j);
                }
                printf("\n");
            }
        }
        else
        {
            cout << "Please enter a value in the bounds of alphabets...";
        }
    }
};

int main()
{
    Pyramid Giza;
    
    Giza.get_height();
    
    printPyramid(Giza);
}