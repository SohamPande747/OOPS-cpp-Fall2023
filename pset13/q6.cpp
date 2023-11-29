#include <iostream>

using namespace std;

int main()
{
    int m,n;

    cout << "Enter rows: ";
    cin >> m;
    cout << "Enter columns: ";
    cin >> n;

    int mat[m][n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter element :" ;
            cin >> mat[i][j];
        }
    }
    int countEven = 0, countOdd = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] % 2 == 0)
            {
                countEven++;
            }
            else
            {
                countOdd++;
            }
        }
    }

    cout << "Even Number: " << countEven << endl;
    cout << "Odd Numbers: " << countOdd << endl;

}