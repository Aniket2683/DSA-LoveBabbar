#include <iostream>
using namespace std;

// A
// B C
// D E F
// G H I J

int main()
{

    int n;
    cout << "Nuber of rows : ";
    cin >> n;

    int row = 1;

    char value = 'A';
    while (row <= n)
    {
        int col = 1;
        while (col <= row)
        {
            cout << value << " ";
            value++;
            col++;
        }
        cout << endl;
        row++;
    }

    return 0;
}